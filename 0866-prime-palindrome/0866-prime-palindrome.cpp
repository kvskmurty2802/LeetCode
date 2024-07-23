class Solution {
public:
  
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
    
bool isPalindrome(int num) {
    int original_num = num;
    int reversed_num = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return original_num == reversed_num;
}
    
int primePalindrome(int n) {
    while (true) {
        if (isPalindrome(n) && isPrime(n)) {
            return n;
        }
        n++;
        if (n > 2 && n % 2 == 0) {
            n++;
        }
    }
    }
};