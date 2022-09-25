class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        
        vector<vector<int>>arr(triplets);
        // we will check if elements in the triplets are less than equal to target elements, else if greater then the condition to take max() will lead to wrong elements being selected & later will yield false...  
        
        int f,s,t; // first,second,third
        f=s=t=0; 
        for(auto i:arr){
            if(i[0]<=target[0] and i[1]<=target[1] and i[2]<=target[2]){
                f=max(f,i[0]);
                s=max(s,i[1]);
                t=max(t,i[2]);
            }
        }
        return (f==target[0] and s==target[1] and t==target[2])?true:false; 
        
    }
};