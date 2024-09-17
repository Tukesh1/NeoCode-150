class Solution {
public:
    int n;
    int dp[101];
    int solve(vector<int>& nums, int i){
        // 1. steal 
        //2. skip
        if(i>=n)return 0;
        if(dp[i] != -1) return dp[i];
        int steal = nums[i]+ solve(nums,i+2);
        int skip = solve(nums,i+1);
        return dp[i]= max(steal,skip);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(nums,0);
    }
};