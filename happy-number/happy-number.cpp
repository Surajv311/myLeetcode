class Solution {
public:
    
      int move(int n)
    {
        int sum = 0;
        
        while(n != 0)
        {
            sum += pow(n % 10,2);
            n = n / 10;
        }
        
        return sum; // to return sum of the power of the digits of number...
    }
    
    bool isHappy(int n) {
         int slow = move(n);
        int fast = move(move(n));
        
//         floyd algo...
        while(slow != fast)
        {
            slow = move(slow);
            fast = move(move(fast));
        }
        
        return fast == 1 ;
    }
};