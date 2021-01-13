//Merge 2 sorted arrays wihtout extra sapce

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        int j = 0;
        int x = n - 1;
        while (x >= 0 && j < m)
        {
            if (arr1[x] >= arr2[j])
            {
                swap(arr1[x], arr2[j]);
            }
            else
                break;
            x--;
            j++;
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};