class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // make a buckrt array.
        // if string match then add it to thr bucket array
        unordered_map<string, vector<string>> mp;
        string st;
        int n= strs.size();
        for (int i = 0; i < n; i++) {
            st = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(st);
        }
        vector<vector<string>> result;
        for (auto i = mp.begin(); i != mp.end(); i++) {
            result.push_back(i->second);
        }
        return result;
    }
};