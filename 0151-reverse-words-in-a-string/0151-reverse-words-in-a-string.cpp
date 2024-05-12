class Solution {
public:
    string reverseWords(string s) {
//         if(s.length()==0) return 0;
        
//         stack<string> st; 
        
//         string w = "";
//         for(auto i:s){
//             // form word
            
//             if(i!=' ')w+=i;
//             if(i==' '){
//                 st.push(w);
//                 w="";
//             }
//         }
//         // last word must be left, it must also be pushed as string ended and it did not encounter another ' '
//         st.push(w);
        
//         string ans = "";
//         while(!st.empty()){
//             string w = st.top(); st.pop();
//             ans+=w; 
//             if(st.size()>=1) ans+=" "; // at the end not adding extra space
//         }
//         // self ref: String pop_back() used to remove a last character of a string, decreasing its length by one.
        
//         return ans;   
        
        stack<string>st;
        string tmp = "";
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(ch==' '){
                
                if(tmp!="")
                    st.push(tmp);
                tmp = "";
            }
            else 
                tmp += ch;
        }
        
        if(tmp!="")
            st.push(tmp);
            
        string ans="";
        while(st.size()>1)
        {
            ans +=  (st.top()+" ");
            st.pop();
        }
        ans += st.top();
        return ans;
        
        
    }
};