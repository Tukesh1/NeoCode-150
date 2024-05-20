class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merged;
        int i = 0, j = 0;
        while (i < n) {
            merged.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            merged.push_back(nums2[j]);
            j++;
        }
        sort(merged.begin(), merged.end());
        int s = merged.size();
        if (s % 2 == 0) { // even

            result = double (merged[s / 2] + merged[(s / 2) - 1]) / 2.0;

        } else {
            // odd
            result = merged[s / 2];
        }
        return result;
    }
};