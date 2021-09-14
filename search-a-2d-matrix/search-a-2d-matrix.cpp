class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int n = matrix.size(); 
        int m = matrix[0].size(); 
        
        if(n==0 and m==0) return false; 
        if(target<matrix[0][0] or target>matrix[n-1][m-1]) return false; 
        
        int i = 0 ; int j = m-1; // for non-square matrix. 
        
        while(i<n and j>=0){
    //  start from the top right corner

            if(matrix[i][j]==target) return true; 
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        
        return false; 
             
    }
};