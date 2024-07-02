class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        multimap<int,char,greater<int>>mp2;
        for (auto& it : s) {
            mp[it]++;
        }
        for(auto it:mp){
            mp2.insert({it.second,it.first});
        }
        string ans="";
        for(auto it:mp2){
            string s="";
            int a= it.first;
            while(a--){
                s+= it.second;

            }
            ans+=s;
        }
        return ans;
    }
};