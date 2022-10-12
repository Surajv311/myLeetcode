class Solution {
public:
    
    bool pal(string s, int i, int j){
        
      while(i<=j){
          if(s[i++]!=s[j--]) return false;
      }
    
        return true; 
        
    }
    
   void fun(int index, string s, vector<vector<string>>& ans, vector<string> &temp ){
        
        if(index==s.length()){
            ans.push_back(temp);
            return; 
        }
        
        for(int i = index ; i < s.length(); i++){
            if(pal(s,index,i)){
                temp.push_back(s.substr(index, i-index+1));
                fun(i+1, s,ans,temp);
                temp.pop_back();
            }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
       
    vector<vector<string>> ans; 
        
        vector<string> temp; 
        
        int index = 0; 
        
        fun(index,s, ans,temp);
        
        return ans; 
        
        
        
    }
};