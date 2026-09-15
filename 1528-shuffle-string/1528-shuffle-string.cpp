class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s1="";
        vector<pair<char,int>> v;
        for(int i=0;i<s.size();i++){
            v.push_back({s[i],indices[i]});
        }
        sort(v.begin(),v.end(),[](auto &a, auto &b) {
        return a.second<b.second;
         });
         for(int i=0;i<indices.size();i++){
            s1=s1+v[i].first;
         }
         return s1;
    }
};