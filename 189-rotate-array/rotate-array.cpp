class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // array rotation to right by k place
        int n = nums.size();
        vector<int>temp(n);

        for(int i= 0;i< n;i++){
            temp[(i+k) %n ] = nums[i];
            cout<<((i+k) %n)<<endl;
        }
       // temp[n-1] = nums[0];
        nums = temp;
    }
};