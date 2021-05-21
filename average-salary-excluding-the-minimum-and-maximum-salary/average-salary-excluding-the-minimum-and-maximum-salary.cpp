class Solution {
public:
    double average(vector<int>& salary) {
        
        
        sort(salary.begin(),salary.end());
        
        return((accumulate(begin(salary), end(salary), 0.)  - salary[0] - salary[salary.size()-1] )/(salary.size()-2));
        
        
        
    }
};