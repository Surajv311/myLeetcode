class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int k) {
        /*
        
        BRUTE FORCE : O(N^4) ... USING 4 FOR LOOPS
        
        BETTER: O(N^3) + LOG(N). USING 3 FOR LOOPS AND THEN A BINARY SEARCH TO FIND THE LAST ELEMENT 
        
        OPTIMISED: O(N^2) + LOG(N). USING 2 LOOPS AND USING TWO POINTER TECHNIQUE TO FIND THE REMAINING SUM 
        
        */ 
        
        vector<vector<int>> ans; 
        
        int n = arr.size(); 
        
        sort(arr.begin(),arr.end());
        
        for(int i = 0 ; i < n-3; i++){
            
            if(i>0 and arr[i]==arr[i-1]) continue; 
            
            for(int j = i+1 ; j < n-2 ; j++){
                
                if(j>i+1 and arr[j]==arr[j-1]) continue;
                
                int low = j+1; int high = n-1; 
                
                
                while(low<high){
                    
                    int x = arr[i] + arr[j] + arr[low] + arr[high];
                    
                    if(x>k){
                        high--;
                    }
                    
                    else if(x<k){
                        low++;
                    }
                    
                    else if(x==k){
                        ans.push_back({arr[i] , arr[j] , arr[low] , arr[high]});
                        low++; high--; // to see if more such left 
                        // to avoid duplicate numbers
                        
                        while(low<high and arr[low] == arr[low-1]){
                            low++;
                        }
                        while(low<high and arr[high] == arr[high+1]){
                            high--;
                        }
                    
                    }
                 
                }
                
                
            }
            
            
        }
        
    return ans; 
    }
};