class Solution {
public:
    int reverse(int x) {
        int result=0;
        while(x != 0){
        int j=x%10;
        if (result > INT_MAX/10 || (result == INT_MAX / 10 && j > 7)) return 0;
        if (result < INT_MIN/10 || (result == INT_MIN / 10 && j < -8)) return 0;
        x=x/10;
        result=(result*10)+j;
        }
        return result;
    };
};