class Solution {
public:
    int twoEggDrop(int n) {
     
        vector<int> v;
        v.push_back(0);
            
	for(int i = 1; i<=n;i++) 
	{
		int x = INT_MAX; 
        // other way to denote is : int x{INT_MAX}
        
		for(int j = 1; j<=i; j++) x = min(x, 1+max(v[i-j], j-1));
        
		v.push_back(x);
	}
	return v.back();    
        
    }
};