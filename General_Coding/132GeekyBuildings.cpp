/*
1. 132 Geeky Buildings 
Hard Accuracy: 97.78% Submissions: 766 Points: 8
There are N buildings in Linear Land. They appear in a linear line one after the other and 
their heights are given in the array arr[]. Geek wants to select three buildings in Linear Land
and remodel them as recreational spots. The third of the selected building must be taller than 
the first and shorter than the second. Can geek build the three-building recreational zone? 

Example 1:

Input:
N = 6
arr[] = {4, 7, 11, 5, 13, 2}
Output:
True
Explanation:
[4, 7, 5] fits the condition. 
Example 2:

Input:
N = 4
arr[] = {11, 11, 12, 9}
Output:
False
Explanation:
No 3 buildings fit the given condition. 

Your Task:
You don't need to read input or print anything
Complete the function recreationalSpot() which takes the array arr[] and
its size N as input parameters and returns a boolean value based on 
whether his building selection was successful or not.
Note: The generated output will be "True" or "False".


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 104
1 ≤ arr[i] ≤ 105

Topic Tags
 Stack
*/

//? Approach 1: with Stack, O(n), O(n)
// class Solution
// {
// public:
//     bool recreationalSpot(int arr[], int n)
//     {
//         stack<int> s1, s2;
//         s1.push(arr[0]);
//         s2.push(arr[0]);
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > s1.top() && arr[i] < s2.top())
//                 return true;
//             if (arr[i] < s1.top())
//                 {
//                    s1.push(arr[i]);
//                    s2.push(arr[i]);
//                 }
//             if (arr[i] > s2.top())
//                 s2.push(arr[i]);
//         }
//         return false;
//     }
// };

//? Approach 2: Similar approach but with min max
//? By maintaining a currMin, currMax till the we find the ans. O(n),O(1)
// class Solution{
// public:
// 	bool recreationalSpot(int arr[], int n){
// 		int currMin, currMax;
//         currMin = currMax = arr[0];

//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] < currMax && arr[i] > currMin)
//                 return true;
//             if (arr[i] < currMin)
//             {
//                 currMin = arr[i];
//                 currMax = arr[i];
//             }
//             else if (arr[i] > currMax)
//             {
//                 currMax = arr[i];
//             }
//         }
//         return false;
// 	}
// };

//? Approach 3: With Vector of Stack by using back() which refers to the last elment of stack

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct stack_data
    {
        int value;
        int min_so_far;

        stack_data(int v, int m)
        {
            value = v;
            min_so_far = m;
        }
    };

    bool recreationalSpot(int arr[], int n)
    {
        // Your code goes here
        vector<stack_data> stack;
        stack.push_back(stack_data(arr[0], arr[0]));
        for (auto i = 1; i < n; i++)
        {
            auto value = arr[i];
            auto current_stack_data = stack_data(value, min(value, stack.back().min_so_far));

            while (!stack.empty() && value > stack.back().value)
                stack.pop_back();

            if (!stack.empty())
                if (value > stack.back().min_so_far && value < stack.back().value)
                    return true;

            stack.push_back(current_stack_data);
        }

        return false;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        if (ob.recreationalSpot(arr, n))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
} // } Driver Code Ends