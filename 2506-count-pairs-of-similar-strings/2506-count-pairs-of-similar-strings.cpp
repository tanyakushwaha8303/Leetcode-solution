class Solution {
public:
void solve(vector<string>& words,int i,int& count) {
    if(i>=words.size()-1) {
        return;
    }
    for(int j=i+1;j<words.size();j++) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for(char c:words[i]) {
            freq1[c]++;
        }
        for(char c:words[j]) {
            freq2[c]++;
        }
        if(freq1.size()==freq2.size()) {
            bool similar=true;
            for(auto it:freq1) {
                if(freq2.find(it.first)==freq2.end()) {
                    similar=false;
                    break;
                }
            }
            if(similar) {
                count++;
            }
        }
    }
    solve(words,i+1,count);
}

int similarPairs(vector<string>& words) {
    int count = 0;
    solve(words, 0, count);
    return count;
}
};