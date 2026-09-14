class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
       unordered_map<char, int> freq1;
       unordered_map<char, int> freq2;

    for(char ch:word1) {
        freq1[ch]++;
    }

    for(char ch:word2) {
        freq2[ch]++;
    }

    for(char ch='a';ch<='z';ch++) {
        int difference=abs(freq1[ch]-freq2[ch]);

        if(difference>3) {
            return false;
        }
    }
    return true;
    }
};