class Solution {
public:
    // define a pair
    typedef pair<int, int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //  using the priority queue solution
        // step 1.
        unordered_map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }
        // step 2
        // sort map ,frequency wise
        // so define min heap
        priority_queue<p, vector<p>, greater<p>>pq; 
            // min heap ,sorted accoring to p
            // 3.push element in min-heap
        
        for(auto &it: mp){
            int val = it.first;
            int freq = it.second;
            pq.push({freq,val});
            if(pq.size() >k){
                pq.pop();
            }
        }
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};