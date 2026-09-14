class Solution {
public:
vector<int> solve(vector<string>& words, char x,vector<int>& ans,int i){
    if(i>=words.size()){
     return ans;
    }
    string s=words[i];

    for(char ch =0;ch<s.size();ch++){
        if(s[ch]==x){
            ans.push_back(i);
            break;
        }
    }
   solve(words,x,ans,i+1);
   return ans;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
    return solve(words,x,ans,0);
        
    }
};