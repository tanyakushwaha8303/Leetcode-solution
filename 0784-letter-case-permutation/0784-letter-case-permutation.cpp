class Solution {
public:
void  solve(string& s, vector<string>& result,string ans,int i){
    if(i>=s.size()){
       result.push_back(ans);
       return ;
    }
   if(isdigit(s[i])){
    ans=ans+s[i];
    solve(s,result,ans,i+1);
   }
    else {
        // First possibility: lowercase
        ans=ans+char(tolower(s[i]));
        solve(s,result,ans,i+1);
        // Second possibility: uppercase
        ans.pop_back();
        ans=ans+char(toupper(s[i]));
        solve(s,result,ans,i+1);
    }
}
    vector<string> letterCasePermutation(string s) {
       vector<string> result;
       string ans="";
       solve(s,result,ans,0); 
       return result;
    }
};