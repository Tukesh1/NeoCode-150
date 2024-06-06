class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize)
            return false;
        // create a map to store hand and its freq in assending order
        map<int, int> mp;
        for (auto handsake : hand) {
            mp[handsake]++;
        }
        while (!mp.empty()){
            int current = mp.begin()->first; // 1.num,2. freq
            for (int i = 0; i < groupSize; i++) {
                if (mp[i + current] == 0) {
                    return false;
                }
                mp[i + current]--; // decrease the frequency
                if (mp[i + current] < 1) {
                    mp.erase(i + current);
                }
            }
        }
        return true;
    }
};