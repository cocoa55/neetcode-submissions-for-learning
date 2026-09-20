class Solution {
public:
    bool isPalindrome(string s) {
        int L = 0;
        int R = s.size() - 1;

        while (L < R) {
                while(L < R && !isalnum(s[L])) //till it points to alphanumerical
                    L++;
                while(R > L && !isalnum(s[R])) 
                    R--;
                if(tolower(s[R]) != tolower(s[L])) {return false;}
                L++;
                R--;
        }
        return true;
    }
};
