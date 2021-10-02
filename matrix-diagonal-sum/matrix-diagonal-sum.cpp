class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        
        int ans=0; int n=mat.size();
        
        for(int i=0;i<n;i++) ans=ans+mat[i][i]+mat[i][n-1-i];
    
//         now think of a difference in a 4*4 matrix & a 5*5 matrix... more specifically think of the center element...
        
        int x = (n-1)/2;
        if(n%2==1) ans-=mat[x][x]; // for center element...
        
        return ans;
        
    }
};