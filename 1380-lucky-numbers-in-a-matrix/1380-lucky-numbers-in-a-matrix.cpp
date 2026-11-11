class Solution {
public:
  void solve(vector<vector<int>>& matrix,int row,int col,vector<int>& ans,int m,int n){
    if(row==m){
        return;
    }
    bool ans1=true;
    bool ans2=true;
    for(int i=0;i<n;i++){//in current row
      if(matrix[row][col]>matrix[row][i]){
        ans1=false;
        break;
      }
    }

    for(int j=0;j<m;j++){//current col
      if(matrix[row][col]<matrix[j][col]){
        ans2=false;
        break;
      }
    }
    if(ans1 && ans2){
        ans.push_back(matrix[row][col]);
    }
     if(col==n-1) {
        solve(matrix,row+1,0,ans,m,n);
    }
    else {
        solve(matrix,row,col+1,ans,m,n);
    }
  }
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
       
      int m=matrix.size();
      int n=matrix[0].size();
      solve(matrix,0,0,ans,m,n);
      return ans;
    }
};