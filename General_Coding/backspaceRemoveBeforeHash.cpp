/*
Backspace problem
Send Feedback
Given a string consisting of lower case characters and hashes(#) where each hash represents a back space .
Find the resultant string after removing the backspaces from the given input string.
(Note : there will be no condition where we use backspace on empty string )
Example :
Input: xy#z
Output: xz

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    string input;
    vector<char> vec;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != '#')
        {
            vec.push_back(input[i]);
        }
        else if (input[i] == '#')
            vec.pop_back();
    }
    for (auto it : vec)
    {
        cout << it;
    }
    return 0;
}

/*
CN CP sol.

#include<bits/stdc++.h>
using namespace std;
int main(){
stack<char> stk;
string str;
cin>>str;
for(int i=0;i<str.length();++i){
if(str[i] == '#') stk.pop();
else stk.push(str[i]);
}
string ret = "";
while(!stk.empty()){
ret = stk.top() + ret;
stk.pop();
}
cout<<ret;
return 0;
}


CN Java Sol

import java.util.*;
public class Solution {
public static int getNextValidCharIndex(String str, int index) {
int backspaceCount = 0;
while (index >= 0) {
if (str.charAt(index) == '#') // found a backspace character
backspaceCount++;
else if (backspaceCount > 0) // a non-backspace character
backspaceCount--;
else
break;
index--; // skip a backspace or a valid character
}
return index;
}
public static String backspace(String s){
String ns="";
int index=s.length()-1;
while(index>=0)
{
int i=getNextValidCharIndex(s,index);
ns=s.charAt(i)+ns;
index=i-1;
}
return ns;
}
}

*/