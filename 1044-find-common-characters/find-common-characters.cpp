class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         int n= words.size();
        vector<int>hash1(26, INT_MAX);
        vector<string>ans;

        for(int i=0;i<n;i++){
            vector<int>temp(26, 0);
            for(int j=0;j<words[i].size();j++){
                temp[words[i][j] - 'a']++;
            }
            for(int i=0;i<26;i++){
                hash1[i] = min(hash1[i], temp[i]);
            }
        }

        for(int i=0;i<26;i++){
        for(int j=0;j<hash1[i];j++){
            ans.push_back(string(1,i + 'a'));
        }
    }

    return ans;
    }
};