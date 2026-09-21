class Solution {
public:
bool wordPattern(string pattern, string s) {
    vector<pair<char, string>> v;
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    if (pattern.size() != words.size()) {
        return false;
    }

    for (int i = 0; i < pattern.size(); i++) {
        v.push_back({pattern[i], words[i]});
    }

    // check that mapping is one-to-one
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i].first == v[j].first && v[i].second != v[j].second)
                return false;

            if (v[i].second == v[j].second && v[i].first != v[j].first)
                return false;
        }
    }

    return true;
}
};