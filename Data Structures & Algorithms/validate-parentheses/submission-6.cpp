class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> par{{')', '('}, {'}', '{'}, {']', '['}};

        std::stack<char> chars;

        for (auto& ch : s) {
            if (par.count(ch)) {
                if (!chars.empty() && chars.top() == par[ch]) {
                    chars.pop();
                } else {
                    return false;
                }
            } else {
                chars.push(ch);
            }
        }
        return chars.empty();
    }
};
