//? https://practice.geeksforgeeks.org/problems/7a28dab3cd1a41839ca28cc33f05963c2654e9ff/1/?track=30-DOC-day-11&batchId=320#

/*
1. Secret Cipher 
Hard Accuracy: 100.0% Submissions: 1105 Points: 8
Geek wants to send an encrypted message in the form of string S to his friend Keeg along with instructions on how to decipher the message. To decipher the message, his friend needs to iterate over the message string from left to right, if he finds a '*', he must remove it and add all the letters read so far to the string. He must keep on doing this till he gets rid of all the '*'.
Can you help Geek encrypt his message string S? 

Note: If the string can be encrypted in multiple ways, find the smallest encrypted string. 

Example 1:

Input: S = "ababcababcd"
Output: ab*c*d
Explanation: We can encrypt the string 
in following way : "ababcababcd" -> 
"ababc*d" -> "ab*c*d"
Example 2:

Input: S = "zzzzzzz"
Output: z*z*z
Explanation: The string can be encrypted 
in 2 ways: "z*z*z" and "z**zzz". Out of 
the two "z*z*z" is smaller in length.
Your Task: 
You don't need to read input or print anything. Complete the function secretCipher() which takes the message string S as input parameter and returns the shortest possible encrypted string.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints: 
1 ≤ |S| ≤ 105

Topic Tags
 Stack
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

// return a string formed by compressing string s
// do not print anything
class Solution
{
public:
    string compress(string str)
    {
        int n = str.length();
        vector<int> vec(n);
        for (int i = 1; i < n; i++)
        {
            int j = vec[i - 1];
            while (j > 0 && str[i] != str[j])
                j = vec[j - 1];
            if (str[i] == str[j])
                j++;
            vec[i] = j;
        }
        string ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2)
            {
                if (vec[i] >= (i + 1) / 2 && (i + 1) % (2 * (i + 1 - vec[i])) == 0)
                {
                    ans.push_back('*');
                    i /= 2;
                    i++;
                }
                else
                {
                    ans.push_back(str[i]);
                }
            }
            else
                ans.push_back(str[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;

        //!giving tle on gfg
        // string ans = "";
        // int n = str.length();
        // int i = n - 1;
        // while (i >= 0)
        // {
        //     if (i % 2 == 0)
        //     {
        //         ans = str.at(i) + ans;
        //         i--;
        //     }
        //     else
        //     {
        //         if (str.substr(0, i / 2 + 1) == str.substr(i / 2 + 1, i / 2 + 1))
        //         {
        //             ans = "*" + ans;
        //             i = i / 2;
        //         }
        //         else
        //         {
        //             ans = str.at(i) + ans;
        //             i--;
        //         }
        //     }
        // }
        // return ans;
    }
};

//! Wrong
// class Solution{
//     public:
//     string compress(string s)
//     {
//         string vec;
//         char firstElem = s[0];
//         char lastElem = s[s.length()-1];
//         int firstElemIndex = 0;
//         int j =0,i=1;

//         for(;i<s.length();i++){
//             if( (s[i] == firstElem || s[i] == s[0]) && lastElem != firstElem && s[i]!= lastElem){
//                 j=firstElemIndex;
//                 // if(s[i] != s[0])
//                 for(;j<i;j++){
//                     vec.push_back(s[j]);
//                 }
//                 vec.push_back('*');
//                 firstElemIndex = i+j; //2+2
//                 i=i+j-1;
//             }
//             else if(s[i] == lastElem) vec.push_back(s[i]);
//             else if ((s[i] == firstElem || s[i] == s[0])){
//                 int j=firstElemIndex;
//                 // if(s[i] != s[0])
//                 for(;j<i;j++){
//                     vec.push_back(s[j]);
//                 }
//                 vec.push_back('*');
//                 firstElemIndex = i+j; //2+2
//                 i=i+j-1;
//             }
//         }
//         return vec;
//     }
// };

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.compress(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends