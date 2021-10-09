class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     
//          using heap... for o(nlogk)
        
        
        unordered_map<int,int> ump;
        for(auto i:nums) ump[i]++;
        
 vector<int> ans;
        priority_queue<pair<int,int>> pq; 
        for(auto it = ump.begin(); it != ump.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > (int)ump.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;         
    }
};