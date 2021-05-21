class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size(); 
        
        // first we find the transpose
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i<j){
                swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        
        // now reverse every row
        
        for(int i = 0 ; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};