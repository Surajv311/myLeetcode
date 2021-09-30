class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> ans(n,vector<int>(n));
        
        int rs,cs,re,ce; // row/col starting & ending
        rs=cs=0; re=ce=n-1; 
        
        int count = 1 ; 
        
        while(rs<=re and cs<=ce)
        {
            for(int i = cs ; i <= ce; i++) ans[rs][i] = count++;
            
            rs++; 
            
            for(int i = rs ; i <= re; i++) ans[i][ce] = count++;
            
            ce--;
            
            for(int i = ce ; i >=cs; i--) ans[re][i] = count++;
            
            re--;
            
            for(int i = re ; i >= rs; i--) ans[i][cs] = count++;
            
            cs++;
        }
        
        return ans; 
    }
};