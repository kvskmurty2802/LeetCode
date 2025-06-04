# Armstrong Number

This code defines a function to check whether a given integer is an Armstrong number.

An **Armstrong number** of `k` digits is an integer such that the sum of its digits raised to the power `k` is equal to the number itself.

## Example

- Input: `153`  
- Output: `true`  
- Explanation: `1³ + 5³ + 3³ = 153`

## Code

```cpp
class Solution {
 public:
  bool isArmstrong(int n) {
    const string s = to_string(n);
    const int k = s.length();
    for (const char c : s)
      n -= pow(c - '0', k);
    return n == 0;
  }
};
