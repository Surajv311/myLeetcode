class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
           // brute force...o(n+k)
    //     int ans; vector<int> res; 
 
    // for (int i = 0; i <= n - k; i++)
    // {
    //     ans = arr[i];
 
    //     for (int j = 1; j < k; j++)
    //     {
    //             ans = max(ans,arr[i + j]);
    //     }
    //     res.push_back(ans); 
    // }
    
    // return res; 
    
    // using dequeue o(n).. dequeue is like doubly ll, here you can push/pop front/back...
    int n = nums.size(); 
    deque<int> q(k);
    
    for(int i = 0 ; i < k;i++){
        
        while(!q.empty() and nums[i]>=nums[q.back()]) q.pop_back(); 
        
        q.push_back(i);// passing the index... 
    }
    
    int i = k ;
    vector<int> ans; 
    while(i<n){
        
        ans.push_back(nums[q.front()]);
        
        // removing elements out of this window..
        while(!q.empty() and q.front()<=i-k) q.pop_front(); 
        
        while(!q.empty() and nums[i]>=nums[q.back()]) q.pop_back(); 
        
        q.push_back(i);
        i++;
    }
    
    // pushing the last element...
    ans.push_back(nums[q.front()]); 
    
    return ans; 
    }
};