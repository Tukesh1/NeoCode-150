class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:t){
            mp[i]--;
        }
        for(auto xt:mp){
            if(xt.second != 0) return false;
        }
        return true;
    }
};