class Solution {
public:
    
string minWindow(string s, string t) {
    if(s.size() < t.size())
        return "";
    unordered_map<char,int> mp;

    for(char c:t) {
        mp[c]++;
    }

    int low=0;
    int start=0;
    int count=t.size();
    int length=INT_MAX;

    for(int high=0;high<s.size();high++) {
        if(mp[s[high]]>0) {
            count--;
        }
        mp[s[high]]--;
        while(count==0) {
            if(high-low+1<length) {
                length=high-low+1;
                start=low;
            }
            mp[s[low]]++;
            if(mp[s[low]]>0) {
                count++;
            }
            low++;
        }
    }
    if(length==INT_MAX)
        return "";
    return s.substr(start, length);
}
};