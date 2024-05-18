class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long cpN = x;
        long long newNum = 0;
        while (x != 0) {
            int digit = x % 10;
            newNum =newNum*10 + digit ;
            x = x / 10;
        }
        return (cpN == newNum);
    }
};