class Solution {
public:
    
    bool fun(vector<vector<char>>& board, int i , int j, int m, int n, string word, int it){
    
    if(it==word.length()) return true; // base case... 
    
    if(i<0 or i>=m or j<0 or j>=n) return false; 
    
    if(board[i][j]!=word[it]) return false; 
    
    char x = board[i][j]; 
    
    board[i][j] = ' '; // making the char. as ' '...'
    
    
    bool found = 
    fun(board, i+1,j,m,n,word, it+1)|| 
    fun(board, i,j+1,m,n,word, it+1)|| 
    fun(board, i-1,j,m,n,word, it+1)|| 
    fun(board, i,j-1,m,n,word, it+1);
    
    /*
    note in above recursive calls, our it -> it+1, hence when we are at a particular
    letter, only the next letter (letter at i+1 index) is searched, as for the further
    recursive calls, note that  `it` is also incrementing... means jumping to 
    other chars... 
    */
    
    // if not found, we backtrack...
    
    board[i][j] = x; 
    
    return found; 
    
}
    
    bool exist(vector<vector<char>>& board, string word) {
     
          int m = board.size(); int n = board[0].size();
        
        int count = 0; 
        
        for(int i = 0 ; i <m ; i++){
            for(int j = 0 ; j < n; j++){
                if(board[i][j]==word[0]){
                
                if(fun(board,i,j,m,n,word,count)) return true; 
                
                }
            }
        }
    
        return false; 
        
    }
};