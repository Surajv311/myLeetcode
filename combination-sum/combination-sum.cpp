class Solution {
public:
    
void recur(vector<int>& arr, int target, vector<int> &ds ,  vector<vector<int>>& ans,int i){
    
//     base case
    
    if(i==arr.size()) {   
      if(target==0) ans.push_back(ds);
        return;
    }
    
    
//     including the number
//     when including , ensure its lesss than target
    
    if(arr[i]<=target){
        ds.push_back(arr[i]);
        recur(arr,target-arr[i],ds,ans,i); // hence 'i' is same...
        ds.pop_back();
    }
    
//         skipping the number
    
    recur(arr,target,ds,ans,i+1);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        
        vector<vector<int>> ans; 
        vector<int> ds; 
        int i = 0 ; 
        recur(candidates,target,ds,ans,i);
        
        return ans;
        
    }
};