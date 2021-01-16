//Palindrome -> to_string(x)

// { Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << PalinArray(a, n) << endl;
    }
} // } Driver Code Ends

/*Complete the function below*/
// #include<bits/stdc++.h>
int PalinArray(int arr[], int n)
{  
    for(int i=0;i<n;i++)
      {
          int x=arr[i];
          string s=to_string(x);
          int j=0;
          int k=s.size()-1;
          while(j<k)
          {
             if(s[j]!=s[k])
                 return 0;
             else{ j++; k--; }
          }
      }
       return 1;
        //   or by reversing elemnt one by one by logic:
        //   while(temp>0)
        //   {
        //       int rem = temp%r;
        //       temp /= 10;
        //       ans = ans*10 + rem;
        //     }
        //     if(ans != arr[i]) return 0;
}