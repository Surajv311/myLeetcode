class Solution {
public:
    bool isValid(string s) {
        //  defining the map with, type of bracket and its corresponding integer value...
        
            unordered_map<char, int> ump {
        {'(', 1}, {'{', 2}, {'[', 3}, 
        {')', -1}, {'}', -2}, {']', -3}                       
    };
        
        stack<char> st;  // stack to pop in/out to the brackets when needed.  
        
        for(int i = 0 ; i < s.length(); i++){
         if(ump[s[i]]>0){
                st.push(s[i]); // push open brackets 
            }
            else{   
			// the case when close brackets come in. 
                if(st.empty()) return false; 
                int x = ump[st.top()]; st.pop(); 
                
 /* since x is already positive & ump[s[i]] is negative. So we add them & not subtract i.e:    +ve - (-ve) == +ve (value always increases) & +ve + (-ve) = value decreases (hence ensuring if sum could end up as 0.)*/
                if(abs(x+ump[s[i]])==0) continue;  // checking 0 sum to ensure similar closed & open brackets join. 
                else return false; 
            }

        }

        if(st.empty()) return true; // to ensure not only one bracket is entered, i.e case when only ( or { ot [ or ), etc. are entered.  In such case stack won't be empty and return false. 
        
        return false; 
    }
};