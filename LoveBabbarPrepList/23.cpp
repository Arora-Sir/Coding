//Maximum product subarray in O(n)

class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(int *arr, int n)
    {
        long long maxi = arr[0];
        long long mini = arr[0];
        long long prod = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < 0)
                swap(mini, maxi); //let arr[i]=-2, mini=-3*-2 == 9, maxi=9*-2 == -18
            maxi = max((long long)arr[i], arr[i] * maxi);
            mini = min((long long)arr[i], arr[i] * mini);
            if (maxi > prod)
                prod = maxi;
        }
        return prod;
    }
};