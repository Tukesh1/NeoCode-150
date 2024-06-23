class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int maxsize = 1;
        deque<int> maxque, minque;
        int i = 0, j = 0;
        while (j < n) {
            while (!maxque.empty() && nums[j] > maxque.back())
                maxque.pop_back();
            while (!minque.empty() && nums[j] < minque.back())
                minque.pop_back();
            maxque.push_back(nums[j]);
            minque.push_back(nums[j]);
            if (maxque.front() - minque.front() > limit) {
                if (minque.front() == nums[i])
                    minque.pop_front();
                if (maxque.front() == nums[i])
                    maxque.pop_front();
                i++;
            }
            maxsize = max(maxsize, j - i + 1);
            j++;
        }
        return maxsize;
    }
};