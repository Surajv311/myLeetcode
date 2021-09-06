class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
  
        /*
        vector<vector<int>> ans; 
        
        vector<int> res; 
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i = n-1 ;i>=2;i-- )
        {
            int j = i-1; int k = 0;
            
            while(j>k)
            {
                int sum = nums[i] + nums[j] + nums[k]; 
                
                if(sum==0) {
                    ans.push_back({nums[i],nums[j],nums[k]});
                }
    
                else if(sum>0){
                    j--;   
                }
                
                else{
                    
                    k++;
                }
            }
        }
        
return ans; 
        */
        
        
        vector<vector<int>> ans;
        
		sort(nums.begin(), nums.end());
		
        int l = nums.size(), a, b;
		
        for ( int i = 0; i < l; i++ )
		{
			if ( i > 0 and nums[i - 1] == nums[i] ) continue; 
		
            a = i + 1; b = l-1;
			while ( a < b )
			{
				if ( nums[i] + nums[a] + nums[b] < 0 ) a++;
				else if ( nums[i] + nums[a] + nums[b] > 0 ) b--;
				else
				{
					vector<int> x { nums[i], nums[a], nums[b] };
					ans.push_back(x);
					a++; //b--;
					while ( a < b && nums[a] == nums[a - 1] ) a++;
				}   
			}    
		}     
		return ans;
        
    
    }
};