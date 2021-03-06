// https://practice.geeksforgeeks.org/problems/10471201e923a0b88a0c1482e6c7e8cc6fdfe93a/1/?track=30-DOC-day-8&batchId=320#

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int start =0;
        int end = n-1;
        int ans = INT_MIN;
        int booksLeft = n-2;
        
        while(start<end){
                
                int mini = min(height[start],height[end]); 
                int answ = mini*booksLeft;
                
                ans = max(ans,answ);
                
                if(height[start] <= height[end]) start++;
                else end--;
                
                booksLeft--;
        }

        if(n==0 || n==1 || n==2) return 0;
        else return ans;

    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends