class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
//      we have the min heap, it would hold only k elements, in the end, only k elements would be present out of which the largest among the k elements would be at bottom and the minimum would be at the top, hence we will pull out the top element... the complexity is: o(nlogk)
        
//         we could also use sort & get the kth largest element: o(logn)
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (int x : nums) {
            
            pq.push(x);
            
            if (pq.size() > k) pq.pop();
        }
        
        return pq.top();
    }
};