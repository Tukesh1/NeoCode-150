class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int maxHeight =0;
       int s = heights.size();
       int cnt =0;
       vector<int>temp = heights;
       sort(temp.begin(), temp.end());

      //sort and compare 
       for(int i =0 ;i<s;i++){
        if(temp[i]!= heights[i])cnt++;
       }
       return cnt;
    }
};