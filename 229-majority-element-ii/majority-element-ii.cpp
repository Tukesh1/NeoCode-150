class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        vector<int> res;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second > n/3){
                res.push_back(i.first);

            }
        }
        return res;
    }
};