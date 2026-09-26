class Solution {
public:
  void solve(int& n,vector<int>& ans){
        if(n==0) {
            return;
        }

      int digit=n%10;
      ans.push_back(digit);
      n=n/10;
      solve(n,ans);
   }
    int maxProduct(int n) {
        vector<int> ans;
         solve(n,ans);
       
       int product=0;
       for(int i=0;i<ans.size();i++) {
            for(int j=i+1;j<ans.size();j++) {
                product = max(product,ans[i]*ans[j]);
            }
        }
        return product;
    }
};