class Solution {
public:

void solve(vector<string>& words, string& s,string& s2,int i){
    if(i>=words.size()){
        return ;
    }
    string s1=words[i];
     s2=s2+s1[0];
    s1.clear();
    solve(words,s,s2,i+1);
    
}
    bool isAcronym(vector<string>& words, string s) {
        string s2="";
       solve(words,s,s2,0);
       if(s2.size()!=s.size()){
        return false;
    }
    for(char ch=0;ch<s2.size();ch++){
        if(s2[ch]!=s[ch]){
            return false;
        }
    }
    
   return true;
    }
};