class Solution {

public:

    string encode(vector<string>& strs) {
        string encoded_string{};

        for(auto& word: strs) {
            encoded_string += to_string(word.size()) + '#' + word;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;

        int i{};
        while (i < s.size()){
            size_t pos = s.find('#', i); //finds the #, from pos i
            int leng = stoi(s.substr(i, pos - i)); //finds the character before # which is our number of characters to extract
            decoded_string.push_back(s.substr(pos + 1, leng));
            //inserts a word, from the point 1 after the #, and grabs leng characters
            i = pos + 1 + leng;
            //pos + 1 + leng is the full expression of one word
        }
        return decoded_string;
    }
};
