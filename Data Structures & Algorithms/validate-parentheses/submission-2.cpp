class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> chars;

        unordered_map<char, char> closeToOpen = {{')', '('}, {'}', '{'}, {']', '['}};

        for (auto& ch : s) {
            if (closeToOpen.count(ch)) { //checks if we have a open or close, if its a close, then its 1
            //because all closes have an element, where as the opens do not as they are values.
                if (!chars.empty() && chars.top() == closeToOpen[ch]) {
                    chars.pop();
                } else {  // if the top of the stack does not contain the open bracket
                    return false;
                }
            } else {
                chars.push(ch);
            }
        }
        return chars.empty();
    }
};
