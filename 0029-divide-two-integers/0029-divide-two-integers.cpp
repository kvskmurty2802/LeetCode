class Solution {
public:
    int divide(int dividend, int divisor) {
        
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    if (divisor == 0) {
        throw overflow_error("Division by zero");
    }

    bool negative = (dividend < 0) ^ (divisor < 0);
    
    long long absDividend = abs(static_cast<long long>(dividend));
    long long absDivisor = abs(static_cast<long long>(divisor));
    long long result = 0;
    
    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor, multiple = 1;
        
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }
        
        absDividend -= tempDivisor;
        result += multiple;
    }
    
    if (negative) {
        result = -result;
    }

    return static_cast<int>(result);
    }
};