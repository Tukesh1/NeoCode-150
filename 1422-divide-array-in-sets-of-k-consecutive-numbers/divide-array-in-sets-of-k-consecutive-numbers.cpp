class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n= nums.size();
        if(n%k !=0) return false;
        map<int,int>mp;
        for(auto &it: nums){
            mp[it]++;
        }
        // 1st number , 2nd = freq
        while(!mp.empty()){
            int curr = mp.begin()->first;
            // k group 
            for(int i=0 ;i<k;i++){
                if(mp[i+curr] == 0) return false;
                mp[i+curr]--;
                if(mp[i+curr] <1) mp.erase(curr+i);
            }

        }
        return true;
    }
};