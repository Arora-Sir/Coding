/*
1. Restrictive Candy Crush 
Medium Accuracy: 93.79% Submissions: 1279 Points: 4
Given a string S and an integer K, the task is to reduce the string by applying the following operation:
Choose a group of K consecutive identical characters and remove them. The operation can be performed any number of times until it is no longer possible.

Example 1:

Input:
K = 2
S = "geeksforgeeks"
Output:
gksforgks
Explanation:
Modified String after each step: 
"geegsforgeeks" -> "gksforgks"
Example 2:

Input:
K = 2
S = "geegsforgeeeks" 
Output:
sforgeks
Explanation:
Modified String after each step:
"geegsforgeeeks" -> "ggsforgeks" -> "sforgeks"
Your Task:  
You don't need to read input or print anything. Complete the function Reduced_String() which takes integer K and string S as input parameters and returns the reduced string.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

Constraints:
1 ≤ |S| ≤ 105
1 ≤ K ≤ |S|

Company Tags
 Amazon
Topic Tags
 Stack Strings
*/

//Input -> 1 2 geeksforgeeks

//Output -> gksforgks

import java.util.*;
import java.math.*;

class restrictiveCandyCrush {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.next());
        while (t-- > 0) {
            int k = Integer.parseInt(sc.next());
            String s = sc.next();
            Solution T = new Solution();
            System.out.println(T.reduced_String(k, s));

        }
    }
}

// ! REGULAR EXPRESSION SOLUTION
// ?
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions

// ? start
// class Solution {
// public static String reduced_String(int k, String str){
// String regex="([a-z])"+"\\1"+"{"+(k-1)+"}";
// for(int i=1; i<str.length()/2;i++){
// if(str.length() == (str=str.replaceAll(regex,"")).length()){
// break;
// }
// }
// return str;
// }
// }
// ? ends

// ! STACK SOLUTION
class Solution {
    static class Pair {
        char ch;
        int count;

        public Pair(char c, int count) {
            this.ch = c;
            this.count = count;
        }
    }

    public static String reduced_String(int k, String s) {
        if (k == 1) {
            return "";
        }
        Stack<Pair> st = new Stack<Pair>();
        int count = 0;
        StringBuilder sb = new StringBuilder();
        for (char i : s.toCharArray()) {
            if (st.isEmpty()) {
                count = 1;
                st.push(new Pair(i, count));
            } else {
                if (st.peek().ch == i) {
                    count = st.peek().count + 1;
                    st.push(new Pair(st.peek().ch, count));

                    if (count == k) {
                        while (count-- > 0) {
                            st.pop();
                        }
                    }
                } else {
                    count = 1;
                    st.push(new Pair(i, count));
                }
            }
        }

        while (!st.isEmpty()) {
            sb.append(st.peek().ch);
            st.pop();
        }

        return sb.reverse().toString();

    }
}
