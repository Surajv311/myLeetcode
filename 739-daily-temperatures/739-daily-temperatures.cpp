class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // it is using the logic of nearest greatest to right ~ NGR logic 
        
        vector<int> arr(temperatures);
        
        int n = temperatures.size(); 
        
        vector<int> ans; 
        stack<pair<int,int>> st; 
        ans.push_back(0);
        st.push({arr[n-1],n-1});
        for(int i = n-2; i>=0; i--)
        {
            
            if(!st.empty() and arr[i]<st.top().first){
            
                int x = abs(i-st.top().second);
                ans.push_back(x);
            
            }
                
            
            else{
                while(!st.empty() and arr[i]>=st.top().first) st.pop();
        
                 if(!st.empty() and arr[i]<st.top().first) {
                     int x = abs(i-st.top().second);
                ans.push_back(x);
                 }
                
                else ans.push_back(0);
                
                }
            
            st.push({arr[i],i});
        
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans; 
        
        
        
    }
};