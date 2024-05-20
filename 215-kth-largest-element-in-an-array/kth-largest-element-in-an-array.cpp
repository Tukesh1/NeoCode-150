class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int num :nums){
            minHeap.push(num);
            cout<<minHeap.top()<<" ";

            if(minHeap.size() > k){
                 cout<<"size "<<minHeap.top()<<" ";
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};