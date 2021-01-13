//3 sorted arrays common elements, Time: O(n1+n2+n3), Space: O(n1)
//by not using map, just traversing array in one time by having 3 variables i,j,k taking care of 3 arrays

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int,int> map;
            vector<int> vec;
            
            for(int i=0;i<n1;i++) if(map[A[i]]==0) map[A[i]]++; 
            for(int i=0;i<n2;i++) if(map[B[i]]==1) map[B[i]]++; 
            for(int i=0;i<n3;i++) if(map[C[i]]==2) map[C[i]]++; 
            
            for(auto i:map)
                if((i.second) == 3) vec.push_back(i.first);
         
            sort(vec.begin(), vec.end());
            return vec;
        }
};