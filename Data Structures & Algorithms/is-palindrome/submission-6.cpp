class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        auto isAlNum = [](char c) { return std::isalnum((unsigned char)c); };
        auto lower   = [](char c) { return std::tolower((unsigned char)c); };
        while (l <= r) {
            if(!isAlNum(s[l])){
                l++;
                continue;
            }
            else if (!isAlNum(s[r])) {
                r--;
                continue;
            }
            
            if(lower(s[l]) == lower(s[r])) {
                l++;
                r--;
            } else return false;
        }
        return true;
    }
};
