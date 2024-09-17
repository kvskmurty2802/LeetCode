class Solution {
public:
    bool isValid(string s) {
    stack<char> stk;
    unordered_map<char, char> bracket_map = {{')', '('}, {'}', '{'}, {']', '['}};

    for (char ch : s) {
        if (bracket_map.find(ch) == bracket_map.end()) {
            stk.push(ch);
        } else {
            if (stk.empty() || stk.top() != bracket_map[ch]) {
                return false; 
            }
            stk.pop(); 
        }
    }
    return stk.empty(); 
    }
};