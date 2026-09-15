class Solution {
public:

void solve(vector<int>& widths, string& s,vector<int>& ans,int i,int& count,int& sum){
    if(i>=s.size()){
        return ;
    }
    int width=widths[s[i]-'a'];

    if(sum+width<=100) {
        sum=sum+width;
    }
    else {
        count++;
        sum = width;
    }

    solve(widths,s,ans,i+1,count,sum);
}
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> ans(2);
         int count = 1;
    int sum = 0;
       solve(widths,s,ans,0,count,sum);
    ans[0]=count;
    ans[1]=sum;
    return ans;
    }
};