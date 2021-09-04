class Solution {
public:
    
void recur(vector<int>& arr, int target, vector<int> &ds ,  vector<vector<int>>& ans,int ind){
    
// note that numbers can be chosen unlimited number of times.     
//     base case
    
    if(ind==arr.size()) {   
//         ind reaches arr.size(), when during further calls, when arr[ind]> target...our ind+1...
      if(target==0) ans.push_back(ds);
        return;
    }
    
    
//     including the number
//     when including , ensure it is less than target
    
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        recur(arr,target-arr[ind],ds,ans,ind); // hence 'i' is same...
        ds.pop_back();
    }
    
//         skipping the number
    
    recur(arr,target,ds,ans,ind+1);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans; 
        vector<int> ds; 
        int ind = 0 ; 
        recur(candidates,target,ds,ans,ind);
        
        return ans;
        
    }
};