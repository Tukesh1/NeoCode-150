class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        // maximum total importance
        vector<int> degree(n, 0); // array to store degree of each city
        for (auto it : roads) {
            degree[it[0]]++;
            degree[it[1]]++;
        }
        // list of cities
        vector<int> cities(n);
        for (int i = 0; i < n; i++) {
            cities[i] = i;
        }
        // sort all cities
        sort(cities.begin(), cities.end(),
             [&](int a, int b) { return degree[a] > degree[b]; });
        // assign values to the city
        long long Importance = 0;
        for (int i = 0; i < n; i++) {
            Importance += (long long)(n - i) * degree[cities[i]];
        }
        return Importance;
    }
};