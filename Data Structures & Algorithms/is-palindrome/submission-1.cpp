class Solution {
public:
    bool isPalindrome(string s) {
        int L = 0;
        int R = s.size() - 1;

        while (L < R) {
                while(L < R && !isAlphaNum(s[L])) //till it points to alphanumerical
                    L++;
                while(R > L && !isAlphaNum(s[R])) 
                    R--;
                if(tolower(s[R]) != tolower(s[L])) {return false;}
                L++;
                R--;
        }
        return true;
    }


    bool isAlphaNum(char c) {
        return (c >= 'a' && c <= 'z' ||
                c >= 'A' && c <= 'Z' ||
                c >= '0' && c <= '9');
    }
};
