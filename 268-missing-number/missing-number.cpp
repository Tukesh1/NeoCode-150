class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // int missed_no =0 ;
        int n= nums.size();
        int sum =0 ;
        for(int i=0 ;i<n ;i++){
           sum += nums[i];
        }
        return ((n*(n+1))/2) - sum ;

    }
};
/*
0 1 2 3
3(3+1)/2 = 6
*/