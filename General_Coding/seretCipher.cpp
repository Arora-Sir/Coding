//? https://practice.geeksforgeeks.org/problems/7a28dab3cd1a41839ca28cc33f05963c2654e9ff/1/?track=30-DOC-day-11&batchId=320#

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