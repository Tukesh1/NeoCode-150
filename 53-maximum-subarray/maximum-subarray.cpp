class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // use kadens algo here

        int maxi = INT_MIN; // maximum sum
        int sum = 0;
        for(int i=0 ;i< nums.size();i++){
            sum += nums[i];
            if(sum > maxi){
                maxi= max(sum,maxi);
            }
            if(sum <0){
                sum =0;
            }
        }
        return maxi;
    }
};