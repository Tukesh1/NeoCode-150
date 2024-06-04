class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // using kadens algorithm
        int currSum =0 ;
        int maxSum = nums[0];
        for(int n:nums){
            currSum = max(currSum,0);
            currSum += n;
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};