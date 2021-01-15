//App 1: O(n^2), O(1) -> Brute force
//App 2: O(nlogn + mlogm),O(1) -> Sorting and searching
//App 3: Sorting + two pointers
//App 4: Hashing (used here), O(n),O(n)


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int i,m,n;
	    cin>>m>>n;
	    
	    int arr1[m],arr2[n];
	    
	    for(i=0;i<m;i++)
	        cin>>arr1[i];
	    
	    for(i=0;i<n;i++)
	        cin>>arr2[i];
	        
	   unordered_map<int,int> map;     
	   for(i=0;i<m;i++) map[arr1[i]]++;
	   for(i=0;i<n;i++)
	    if(map[arr2[i]] == 0) { cout<<"No"<<endl; break; }
	   if (i==n) cout<<"Yes"<<endl;
	}
	return 0;
}