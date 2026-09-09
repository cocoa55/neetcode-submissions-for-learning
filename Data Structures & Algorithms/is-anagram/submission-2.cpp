class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<int, char> countS;
        unordered_map<int, char> countT;


        for(size_t i{0}; i < t.size(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};
