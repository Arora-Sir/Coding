//Sum of pair = given number

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            int sub = k-arr[i];
            if(map[sub] == 0) map[arr[i]]++; //ie value not present in map
            else{
                count += map[k-arr[i]]; 
                map[arr[i]]++;
            }
            
            // if(map.find(k-arr[i])!=map.end())
            //     count = count + map[k-arr[i]];
            // map[arr[i]]++;
        }
        return count;
    }
};