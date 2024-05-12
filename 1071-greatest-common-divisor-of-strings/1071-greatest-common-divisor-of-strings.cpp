class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1){
        int l1 = str1.length(); int l2 = str2.length();
        int x = gcd(l1,l2);
        return str1.substr(0,x);
        }
        else return "";
        // Proof:-str1 = mGCD, str2 = nGCD, str1 + str2 = (m + n)GCD = str2 + str1
    }
};