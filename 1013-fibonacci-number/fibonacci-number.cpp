class Solution {
public:
    int fib(int n) {
    //    if(n== 0) return 0; // recursion based solution 
    //    if(n==1) return 1;
    //    return fib(n-1)+fib(n-2) ;
    // DP solution 

    vector<int>dp(n+1);
    if(n==0) return 0;
    dp[0]=0;
    dp[1]=1;
    for(int i= 2;i<=n;i++){
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];
    }
};