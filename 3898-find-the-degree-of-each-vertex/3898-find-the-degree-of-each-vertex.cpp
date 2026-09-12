class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
       
       int m=matrix.size();
       int n=matrix[0].size();
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
             sum=sum+matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};