class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // using dp solution 
        int n = nums.size();
        vector<int>left(n,0);
        int temp= 1;
        for(int i =0 ;i<n;i++){
            temp *= nums[i];
            left[i]= temp;
        }
        // right sum 
        vector<int>right(n,0);
        int tem =1;
        for(int i= n-1;i >0 ;i--){
            tem *= nums[i];
            right[i]= tem;
        }
        // initilasation start here 
        vector<int>res(n,0);
        res[0] = right[1];
        res[n - 1] = left[n - 2];
        for (int i = 1; i < n - 1; i++)
        {
            res[i] = left[i - 1] * right[i + 1];
        }
        return res;
    }
};