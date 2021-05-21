class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        next_permutation(nums.begin(),nums.end());
        
        
        /*
        
        Solution 1

Just for info: There's a library function that does the job, even going from totally reverse sorted to sorted:

void nextPermutation(vector<int>& nums) {
    next_permutation(begin(nums), end(nums));
}
//////////////////////////////////////////

Solution 2

Using library functions for all building blocks of the algorithm. Very nice how they all play together, notice the total lack of +1/-1, it all fits exactly.

void nextPermutation(vector<int>& nums) {
    auto i = is_sorted_until(nums.rbegin(), nums.rend());
    if (i != nums.rend())
        swap(*i, *upper_bound(nums.rbegin(), i, *i));
    reverse(nums.rbegin(), i);
}
/////////////////////////////////////////

Solution 3

Doing it all on my own (except swap, let's not be silly):

void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 1, k = i;
    while (i > 0 && nums[i-1] >= nums[i])
        i--;
    for (int j=i; j<k; j++, k--)
        swap(nums[j], nums[k]);
    if (i > 0) {
        k = i--;
        while (nums[k] <= nums[i])
            k++;
        swap(nums[i], nums[k]);
    }
}

////////////////////////////////////////////////////

 void nextPermutation(vector<int> &num) 
    {
        if (num.empty()) return;
        
        // in reverse order, find the first number which is in increasing trend (we call it violated number here)
        int i;
        for (i = num.size()-2; i >= 0; --i)
        {
            if (num[i] < num[i+1]) break;
        }
        
        // reverse all the numbers after violated number
        reverse(begin(num)+i+1, end(num));
        // if violated number not found, because we have reversed the whole array, then we are done!
        if (i == -1) return;
        // else binary search find the first number larger than the violated number
        auto itr = upper_bound(begin(num)+i+1, end(num), num[i]);
        // swap them, done!
        swap(num[i], *itr);
    }
        
        
        */
    }
};