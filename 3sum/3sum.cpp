class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
//         vector<vector<int>> ans; 
        
//         vector<int> res; 
        
//         sort(nums.begin(),nums.end());
        
//         int n = nums.size();
        
//         for(int i = n-1 ;i>=2;i-- )
//         {
            
//             int j = i-1; int k = 0;
            
//             while(j>k)
//             {
                
//                 int sum = nums[i] + nums[j] + nums[k]; 
                
//                 if(sum==0) {
                    
// //                     res.push_back(nums[i]);
// //                     res.push_back(nums[j]);
// //                     res.push_back(nums[k]);
                    
//                     // ans.push_back(res);
//                     ans.push_back({nums[i],nums[j],nums[k]});
                    
//                     // res.clear();
                    
//                 }
                
//                 else if(sum>0){
                    
//                     j--;
                    
//                 }
                
//                 else{
                    
//                     k++;
//                 }
                
                
                
//             }
           
            
//         }
        
// return ans; 
        
        
        
        vector<vector<int>> ans;
		sort(nums.begin(), nums.end());
		int length = nums.size() - 1, ll, rr;
		for ( int i = 0; i <= length; ++i )
		{
			if ( i > 0 && nums[i - 1] == nums[i] ) continue; 
			ll = i + 1; rr = length;
			while ( ll < rr )
			{
				if ( nums[i] + nums[ll] + nums[rr] < 0 ) ++ll;
				else if ( nums[i] + nums[ll] + nums[rr] > 0 ) --rr;
				else
				{
					vector<int> anotherAnswer { nums[i], nums[ll], nums[rr] };
					ans.push_back(anotherAnswer);
					++ll; //--rr;
					while ( ll < rr && nums[ll] == nums[ll - 1] ) ++ll;
				}   
			}    
		}     
		return ans;
        
    
    }
};