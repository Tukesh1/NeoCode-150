class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int tagSum = nums[0]+nums[1];
        int n = nums.size();
        int cnt = 1;
        int i =2;
        while(i<n){
            if(i+1 <n && (nums[i] + nums[i+1] == tagSum)){
                cnt++;
                i=i+2;
            }else{
                break;
            }

        }

        return cnt;
    }
};