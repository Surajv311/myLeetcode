class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> ump;
        int ans = 0;
        
        // if(nums1.size()==0) nums1.push_back(0);
        //         if(nums2.size()==0) nums2.push_back(0);
        // if(nums3.size()==0) nums3.push_back(0);
        // if(nums4.size()==0) nums4.push_back(0);
        
        for(auto i: nums1)
            for(auto j: nums2)
                // adding the pair sum in the hash...
                ump[i+j]++;

        int count = 0; 
        
        for(auto i: nums3)
            for(auto j: nums4)
               // if(ump[i+j]--) count++;
                if(ump[-(i+j)]) count+= ump[-(i+j)];

        
        ans = count;
        return ans;
        
        
    }
};