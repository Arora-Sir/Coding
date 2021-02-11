/*
1. Help Classmates 
Medium Accuracy: 100.0% Submissions: 561 Points: 4
Professor X wants his students to help each other in the chemistry lab. He suggests that every student should help out a classmate who scored less marks than him in chemistry and whose roll number appears after him. But the students are lazy and they don't want to search too far. They each pick the first roll number after them that fits the criteria. Find the marks of the classmate that each student picks.
Note: one student may be selected by multiple classmates.

Example 1:

Input: N = 5, arr[] = {3, 8, 5, 2, 25}
Output: 2 5 2 -1 -1
Explanation: 
1. Roll number 1 has 3 marks. The first person 
who has less marks than him is roll number 4, 
who has 2 marks.
2. Roll number 2 has 8 marks, he helps student 
with 5 marks.
3. Roll number 3 has 5 marks, he helps student 
with 2 marks.
4. Roll number 4 and 5 can not pick anyone as 
no student with higher roll number has lesser 
marks than them. This is denoted by -1.
Output shows the marks of the weaker student that 
each roll number helps in order. ie- 2,5,2,-1,-1

Example 2:

Input: N = 4, a[] = {1, 2, 3, 4}
Output: -1 -1 -1 -1 
Explanation: As the marks ars in increasing order. 
None of the students can find a classmate who has 
a higher roll number and less marks than them.
Your Task:  
You don't need to read input or print anything. Complete the function help_classmate() which takes the array arr[] and size of array N as input parameters and returns a list of numbers. If a student is unable to find anyone then output is -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 106

Topic Tags
 Stack
*/

//? Input: 1   5   4 8 5 2 25
//? Output: 2 5 2 -1 -1

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{

public:
    vector<int> help_classmate(vector<int> arr, int n)
    {
        vector<int> v;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    v.push_back(arr[j]);
                    cnt = 0;
                    break;
                }
                else
                    cnt = 1;
            }
            if (cnt == 1)
                v.push_back(-1);
        }
        v.push_back(-1);
        return v;
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
        vector<int> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }
        Solution obj;
        vector<int> result = obj.help_classmate(array, n);
        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

//! In Java

//todo: Apply Nearest greater left method then reverse the result list
// class Solution
// {
// public static int[] help_classmate(int arr[], int n)
//     {
//         Stack<integer> s = new Stack<>();
//         ArrayList<integer> al = new ArrayList<>();  //? List<integer> list = new ArrayList<>();

//         for (int i = n - 1; i >= 0; i--)
//         {
//             while (s.size() > 0 && arr[s.peek()] >= arr[i]) //? while (!s.isEmpty() && arr[s.peek()] >= arr[i])
//                 s.pop();
//             if (s.size() == 0)  //? if (s.empty())
//                 al.add(-1);
//             else
//                 al.add(arr[s.peek()]);
//             s.push(i);
//         }
//         ArrayList<integer> alr = new ArrayList<>();
//         for (int i = al.size() - 1; i >= 0; i--)
//             alr.add(al.get(i));

//         int temp[] = new int[alr.size()];
//         int idx = 0;
//         for (int i : alr)
//             temp[idx++] = i;

//         return temp;

//         //! last 4 lines can be done like this:
//         Collections.reverse(al);
//         int[] a = list.stream().mapToInt(Integer::intValue).toArray();
//         return a;
//     }
// };