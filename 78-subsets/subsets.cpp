class Solution {
public:
vector<vector<int>> res;
    void solve(int i, vector<int>& nums ,vector<int>subset){
        //basecase 
        if(i == nums.size()){
            res.push_back(subset);
            return;
        } 
        // take in 
        solve(i+1, nums,subset);
        subset.push_back(nums[i]);
        // take out
        solve(i+1, nums,subset);
        subset.pop_back();


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // take in and take out 
       vector<int> subset;
        solve(0 ,nums, subset);

        return res;
    }
};