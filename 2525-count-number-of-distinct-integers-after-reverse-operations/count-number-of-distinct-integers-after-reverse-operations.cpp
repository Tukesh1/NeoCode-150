class Solution {
public:
    int revDigit(int n) {
        int num = 0;
        while (n != 0) {
            int digit = n % 10;
            num = num * 10 + digit;
            n = n / 10;
        }
        return num;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        vector<int> newNums(2*n ,0);
        for (int i = 0; i < n; i++) {
            int a = revDigit(nums[i]);
            newNums[i] = nums[i];
            newNums[i + n] = a;
        }
        for (auto i : newNums) {
            st.insert(i);
        }
        return st.size();
    }
};