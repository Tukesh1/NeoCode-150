class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>map;
        map[0] = 1;
        int sum =0 , res =0;
        for(int i=0 ;i<nums.size();i++){
            sum += nums[i];
            int mod = sum%k;
            if(mod < 0){
                mod = mod % k +k;
            }
            res += map[mod];
            map[mod]++;
        }
        return res;
    }
};