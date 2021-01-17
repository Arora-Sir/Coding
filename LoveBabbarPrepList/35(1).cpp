//Median of 2 same size sorted arrays , O(log n), recursively

public
double findMedianSortedArrays(int[] a, int[] b, int startIndexA, int endIndexA, int startIndexB, int endIndexB)
{

    if ((endIndexA - startIndexA < 0) || ((endIndexB - startIndexB < 0))) //Base care 1 : No elements exist
    {
        System.out.println("Invalid Input.");
        return ERROR_INVALID_INPUT;
    }

    if ((endIndexA - startIndexA == 0) && ((endIndexB - startIndexB == 0))) //Base care 2 : only 1 element exist
    {
        return (a[0] + b[0]) / 2;
    }

    if ((endIndexA - startIndexA == 1) && ((endIndexB - startIndexB == 1))) //Base care 3 : two elements in one array
    {
        return (1.0 * (max(a[startIndexA], b[startIndexB]) + min(a[endIndexA], b[endIndexB]))) / 2;
    }

    double m1 = findMedian(a, startIndexA, endIndexA); //Median of array 1
    double m2 = findMedian(b, startIndexB, endIndexB); //Median of array 2

    if (m2 == m1)
    {
        return m2;
    }

    if (m1 < m2) //so we can skip values smaller than m1, and values larger than m2
    {
        if ((endIndexA - startIndexA) % 2 == 0)
        {
            startIndexA = startIndexA + (endIndexA - startIndexA) / 2;
            endIndexB = startIndexB + (endIndexB - startIndexB) / 2;
        }
        else
        {
            startIndexA = startIndexA + (endIndexA - startIndexA) / 2;
            endIndexB = startIndexB + (endIndexB - startIndexB) / 2 + 1;
        }
    }

    else //else we can skip values smaller than m2, and values larger than m1
    {
        if ((endIndexB - startIndexB) % 2 == 0)
        {
            startIndexB = startIndexB + (endIndexB - startIndexB) / 2;
            endIndexA = startIndexA + (endIndexA - startIndexA) / 2;
        }
        else
        {
            startIndexB = startIndexB + (endIndexB - startIndexB) / 2;
            endIndexA = startIndexA + (endIndexA - startIndexA) / 2 + 1;
        }
    }
    return findMedianSortedArrays(a, b, startIndexA, endIndexA, startIndexB, endIndexB);
}