class Solution {
public:
    
    
void recur(vector<int>& arr, int target, vector<int> &ds ,  vector<vector<int>>& ans,int ind){
    
//     base case
// no need to use ind... unlike CSI question earlier... 
      if(target==0){ ans.push_back(ds);
        return;
    }
    
// including the numbers...
        
for(int i = ind ; i < arr.size();i++){
    
if(i>ind and arr[i]==arr[i-1]) continue; // since we must have uniques elements.... 

if(arr[i]<=target){
ds.push_back(arr[i]);
recur(arr,target-arr[i],ds,ans,i+1); // hence 'i' is same.... i & ind..same...
ds.pop_back();
}
    
    }
}
           
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         
        vector<vector<int>> ans; 
        vector<int> ds; 
        int ind = 0 ; 
        
//          sorting ....
        sort(candidates.begin(),candidates.end());
        
        recur(candidates,target,ds,ans,ind);
        
        return ans;
    }
};