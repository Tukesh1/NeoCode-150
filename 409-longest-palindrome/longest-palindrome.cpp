class Solution {
public:
    int longestPalindrome(string s) {
         int OddFreq=0;
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
            if(mp[c] % 2== 1){
                // odd freq
                OddFreq++;
            }
            else{
                OddFreq--;              
            }
        }
        if(OddFreq >1){
            return s.length() - OddFreq +1;
        }

        return s.length();
    }
};