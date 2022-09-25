 bool compare(vector<int>&a, vector<int>&b){
        return a[1]<b[1]; 
    }
    

class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int remove = 0; 
        vector<vector<int>>arr(intervals);
            
        sort(arr.begin(), arr.end(), compare);
        if(arr.size()==0) return 0; 
        
        vector<int> x = arr[0]; 
            
        for(auto i:arr){
            
            if(i[0]<x[1]) remove++;
            
            else {
                x=i; 
            }
            
        }
        
        return --remove;// suntracting, since think of case when only 2 arr..given... 
    }
};