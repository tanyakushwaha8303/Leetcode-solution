class Solution {
public:

void solve(string& s,int k,int i,string& ans) {
    if(i>=s.size()) {
        return;
    }
    int end=min(i+k,(int)s.size());
    reverse(s.begin()+i,s.begin()+end);
    for(int j=i;j<min(i+2*k,(int)s.size());j++) {
        ans=ans+s[j];
    }
    solve(s,k,i+2*k,ans);
}

string reverseStr(string s, int k) {
    string ans="";
    solve(s,k,0,ans);
    return ans;
}
};