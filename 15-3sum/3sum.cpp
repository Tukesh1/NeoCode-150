class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        // usnig two sum approach
        vector<vector<int>> res;
        int n = arr.size();
        // base case
        if (n < 3)
            return res;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 2; i++) {
            if (arr[i] > 0) // sum can never be 0
                break;
            if (i > 0 && arr[i - 1] == arr[i]) {
                continue;
            }
            // use two sum property here
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum < 0) {
                    j++;

                } else if (sum > 0) {
                    k--;

                } else {
                    res.push_back({arr[i], arr[j], arr[k]});
                    while (j < k && arr[j] == arr[j + 1]) {
                        j++;
                    }
                    j++;

                    while (j < k && arr[k - 1] == arr[k]) {
                        k--;
                    }
                    k--;
                }
            }
        }
        return res;
    }
};
/*
 -4, -1 ,-1 ,0 ,1,2


*/