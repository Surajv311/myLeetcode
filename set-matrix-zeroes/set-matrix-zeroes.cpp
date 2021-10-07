class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
//         int n = matrix.size();
        
//         vector<int> row(n,0); vector<int> col(n,0);
        
//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(matrix[i][j]==0){
//                     row[i] = 1; 
//                     col[j] = 1; 
//                 }
//             }
//         }
        
        
//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(row[i] == 1 or  col[j] == 1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
        
        
        
        bool col0 = false;
        bool row0 = false;
        
                for (int i = 0; i < matrix[0].size(); i++) { //checking first row
            if (matrix[0][i] == 0) {
                row0 = true;
                break;
            } 
        }
        
        for (int i = 0; i < matrix.size(); i++) { //checking first col
            if (matrix[i][0] == 0) {
                col0 = true;
                break;
            } 
        }

        for (int i = 1; i < matrix.size(); i++) { //checking except first row & col
            for (int j = 1; j < matrix[0].size(); j++) 
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
        }
    for (int i = 1; i < matrix.size(); i++) { //processing except first row and col
           for (int j = 1; j < matrix[0].size(); j++) 
               if (matrix[i][0] == 0 or matrix[0][j] == 0)
                   matrix[i][j] = 0;
        }
        
                if (row0) { //process first row
            for (int i = 0; i < matrix[0].size(); i++) 
                matrix[0][i] = 0;
        }
        
        if (col0) { //process first col
            for (int i = 0; i < matrix.size(); i++) 
                matrix[i][0] = 0;
        }

        
    }
};