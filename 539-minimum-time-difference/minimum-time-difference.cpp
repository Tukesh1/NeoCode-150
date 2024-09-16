class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // min time difference
        int mini = INT_MAX;
        vector<int> minute;
        for (auto& val : timePoints) {
            int hr = 10 * (val[0] - '0') + (val[1] - '0');
            int min = 10 * (val[3] - '0') + (val[4] - '0');
            minute.push_back(hr * 60 + min);
        }
        sort(minute.begin(), minute.end()); 
         int n = minute.size();
        for(int i =1;i<n;i++){
            mini= min(mini, minute[i]- minute[i-1]);
        }
      
        mini=  min(mini, 1440 - (minute[n-1] - minute[0]));
        return mini;

    }
};