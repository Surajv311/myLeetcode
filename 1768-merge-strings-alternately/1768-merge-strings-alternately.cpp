class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     
     int l1 = word1.length();
int l2 = word2.length();
int i=0; string s = "";
while(i<l1 or i<l2){
    if(i<l1) s+=word1[i];
    if(i<l2) s+=word2[i];
i++;
}
return s;
    }
};