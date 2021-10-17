class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size(); 
//         int k = m*n;
//         vector<int> ans;
        
//         if(m==0) return ans; 
        
//         int rs,cs,re,ce; // row/col starting & ending
//         rs=cs=0; re=ce=m-1; 
        
//         int count = 1 ; 
        
//         while(rs<=re and cs<=ce)
//         {
//             for(int i = cs ; i <= ce; i++) ans.push_back(matrix[rs][i]);
            
//             rs++; 
            
//             for(int i = rs ; i <= re; i++) ans.push_back(matrix[i][ce]);
            
//             ce--;
            
//             for(int i = ce ; i >=cs; i--) ans.push_back(matrix[re][i]);
            
//             re--;
            
//             for(int i = re ; i >= rs; i--) ans.push_back(matrix[i][cs]);
            
//             cs++;
//         }
        
//         return ans; 
    
    
int m=matrix.size(); int n=matrix[0].size();  
if(m==0) return {};
        
vector<int>ans(m*n);  
int r=0,c=0,cnt=0; 
while(r<m && c<n)
{
    for(int i=c;i<n;i++) ans[cnt++]=matrix[r][i];
            r++;
    for(int j=r;j<m;j++) ans[cnt++]=matrix[j][n-1]; 
            n--; 
            
    if(r<m){
    for(int i=n-1;i>=c;i--) ans[cnt++]=matrix[m-1][i];
    m--; 
    }
    
    if(c<n){
    for(int j=m-1;j>=r;j--) ans[cnt++]=matrix[j][c]; 
    c++;
    }
} 
    
        return ans;
    
    
    }
};