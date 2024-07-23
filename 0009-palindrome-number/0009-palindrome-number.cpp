class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int result=0;
        int num=x;
        while(x>0){
            int i=x%10;
            if (result > (INT_MAX - i) / 10) { // Check for overflow
                return false;
            }
            result=(result*10)+i;
            x=x/10;
        }
    return num==result;
    }
};