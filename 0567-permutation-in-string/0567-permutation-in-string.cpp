class Solution {
public:
bool solve(string& s1, string& s2,int i){
    if(i>=s2.size()){
        return false;
    }
    string s=s2.substr(i,s1.size());
    sort(s.begin(),s.end());
    if(s1==s){
        return true;
    }
    return solve(s1,s2,i+1);
}
    bool checkInclusion(string s1, string s2) { 
        if(s1.size()>s2.size()){
            return false;
        }
        sort(s1.begin(),s1.end());
       return solve(s1,s2,0); 
    }
};