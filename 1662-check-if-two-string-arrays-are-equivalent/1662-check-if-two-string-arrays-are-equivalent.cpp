class Solution {
public:
void solve1(vector<string>& word1,int i,string& s1) {
    if(i>=word1.size()) {
        return;
    }

    s1=s1+word1[i];

    solve1(word1,i+1,s1);
}

void solve2(vector<string>& word2,int i,string& s2) {
    if(i>=word2.size()) {
        return;
    }

    s2 = s2+word2[i];

    solve2(word2,i+1,s2);
}

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string s1 = "";
    string s2 = "";

    solve1(word1,0,s1);
    solve2(word2,0,s2);

    if(s1.size()!=s2.size()) {
        return false;
    }

    for(int j=0;j<s1.size();j++) {
        if(s1[j]!=s2[j]) {
            return false;
        }
    }

    return true;
}
};