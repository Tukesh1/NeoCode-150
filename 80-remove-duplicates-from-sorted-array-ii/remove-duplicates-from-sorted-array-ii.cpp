class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int i=0 ;
        for(auto it:mp){
            int curr = it.first;
            nums[i]= curr;
            if(it.second >1){
                nums[i+1] = curr;
                i++;
            }
            i++;
        }
        return i;
    }
};