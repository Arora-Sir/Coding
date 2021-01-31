/*
    Time Complexity: O(N*(2^N))
    Space Complexity: O(N)
*/

/*
    Approach 1:
    Backtracking

    The idea is to generate all possible substrings of a given string recursively using backtracking.
    For each recursive call, the starting index of the string is start. Now, iteratively generate 
    all possible substrings beginning at the start index and ending at let’s say at the Kth index. The K index increments from start till the end of the string.
    For every substring(from index start to K, both inclusive) generated check if it is a palindrome.
    If the substring is palindrome then add it to list currentList then recur for the remaining part of a string(with start = K+1).
    At last, we backtrack if the start index reaches the end of the string and add the currentList to the ans list.

    !Time Complexity

    O(N*2^N), where N is the length of the String.

    In the worst case, when all substrings are palindromes.
    Then there will be 2^N  possible substrings and for each substring, it takes O(N) time to generate the substring and to check if it is palindrome or not.
    Hence the overall complexity will be O(N*2^N).
    
    !Space Complexity

    O(N), where N is the length of the string.

    In the worst case, extra space is required for the recursion stack.
    
*/
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &S, int i, int j)
{
    while (i < j)
    {
        if (S[i] != S[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void partitionHelper(string &S, int start, vector<vector<string>> &ans, vector<string> &currentList, vector<vector<bool>> dp)
{

    if (start >= S.length())
    {
        ans.push_back(currentList);
        return;
    }

    for (int k = start; k < S.length(); k++)
    {
        if (dp[start][k])
        {
            currentList.push_back(S.substr(start, k + 1 - start));
            partitionHelper(S, k + 1, ans, currentList, dp);
            currentList.pop_back();
        }
    }
}

vector<vector<string>> partition(string S)
{
    vector<vector<bool>> dp(S.length(), vector<bool>(S.length(), false));
    for (int i = 0; i < S.length(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (S[i] == S[j] && (i - j < 2 || dp[j + 1][i - 1]))
                dp[j][i] = true;
        }
    }

    vector<vector<string>> ans;
    vector<string> currentList;
    partitionHelper(S, 0, ans, currentList, dp);
    return ans;
}

int main()
{
    clock_t tStart = clock();

    string S = "ABBA";
    vector<vector<string>> part = partition(S);
    int count, nowCount = INT_MAX;
    for (int i = 0; i < part.size(); i++)
    {
        count = 0;
        for (int j = 0; j < part[i].size(); j++)
        {
            cout << part[i][j] << " ";
            count++;
        }
        nowCount = min(nowCount, count);
        cout << endl;
    }
    cout << nowCount << endl;
    double answ = (double)(clock() - tStart) / CLOCKS_PER_SEC;
    cout << answ;
}