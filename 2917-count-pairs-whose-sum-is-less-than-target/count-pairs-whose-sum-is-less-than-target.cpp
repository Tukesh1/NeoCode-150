class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        // for(int i =0 ;i< nums.size();i++){
        //     for(int j=0 ;j< i;j++){
        //         if(nums[i] + nums[j] < target) cnt++;
        //     }
        // }
        // using binary search
        sort(nums.begin(), nums.end());
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int mid = nums[s] + nums[e];
            if (mid < target){
                cnt += e-s;
                s++;
            }
                
            else
                e--;
        }
        return cnt;
    }
};