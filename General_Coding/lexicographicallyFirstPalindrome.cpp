/*
First palindrome
Send Feedback
Given a string S, you need to find and return the lexicographically first palindrome string that can be made using characters of S.
Return an empty string if no palindrome can be created using S.
Input Format :
String S
Output Format :
Required palindrome
Constraints :
1 <= Length of S <= 1000
Sample Input 1 :
abcca
Sample Output 1 :
acbca
Sample Input 2 :
azxyaaz
Sample Output 2 :
"" (Empty String)
*/

import java.util.Arrays;
public
class Solution
{
public
	static String nextPalindrome(String input)
	{
		int freq[] = new int[26];
		for (int i = 0; i < input.length(); i++)
		{
			int index = input.charAt(i) - 'a';
			freq[index]++;
		}
		int countOdd = 0;
		for (int i = 0; i < 26; i++)
		{
			if (freq[i] % 2 != 0)
			{
				countOdd++;
			}
		}
		if (input.length() % 2 == 0 && countOdd != 0)
		{
			return "";
		}
		if (input.length() % 2 != 0 && countOdd != 1)
		{
			return "";
		}
		char temp[] = input.toCharArray();
		Arrays.sort(temp);
		String inputNew = "";
		for (char i : temp)
		{
			inputNew += i;
		}
		String output1 = "", output2 = "", output = "";
		for (int i = 0; i < inputNew.length();)
		{
			int index = inputNew.charAt(i) - 'a';
			int count = freq[index];
			if (count % 2 == 0)
			{
				output1 += inputNew.substring(i, i + (count / 2));
				output2 = inputNew.substring(i, i + (count / 2)) + output2;
			}
			else
			{
				output = inputNew.substring(i, i + count);
			}
			i += count;
		}
		String ans = output1 + output + output2;
		return ans;
	}
}