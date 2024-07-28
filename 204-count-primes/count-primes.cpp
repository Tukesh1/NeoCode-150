class Solution {
public:
    int countPrimes(int n) {
        // dp solution
        vector<bool>isPrime(n,true);
        for(int i =2;i*i <=n ;i++){
            if(isPrime[i]== true){
                for(int j =i*i ;j<n; j+=i){
                    isPrime[j]= false;
                }
            }
        }
        int res=0 ;
        for(int i =2;i<n;i++){
            if(isPrime[i]) res++;
        }
        return res;
    }
};