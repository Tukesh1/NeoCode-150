class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1 || n == 2)
            return n;
        int a=1, b=2;
        int c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
/*
 //recursion
        if(n<0) return 0;// not a way to climb
        if(n==0) return 1;// got one way to climb
        int OneStep = climbStairs(n-1);
        int twoStep = climbStairs(n-2);
        return OneStep+ twoStep;

        // dp // memorisation
       vector<int>dp(n+1);
       if(n==1) return 1;
       dp[0]=0;
       dp[1]= 1;
       dp[2] =2;
       for(int i=3;i<=n;i++){
        dp[i]= dp[i-1]+dp[i-2];
       }
       return dp[n];
*/