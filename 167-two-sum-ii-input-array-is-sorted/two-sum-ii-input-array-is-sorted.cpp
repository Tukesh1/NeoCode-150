class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while (s < e) {
            int sum = nums[s] + nums[e];
            if (sum > target) {
                e--;
            } else if (sum < target) {
                s++;
            } else {
                return {s+1, e+1};
            }
        }
        return {-1, -1};
    }
};