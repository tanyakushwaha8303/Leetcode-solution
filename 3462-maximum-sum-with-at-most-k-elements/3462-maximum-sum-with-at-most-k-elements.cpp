class Solution {
public:

    void solve(vector<vector<int>>& grid,vector<int>& limits,int k,int i,vector<int>& result) {
        if(i>=grid.size()) {
            return;
        }

        vector<int> ans;

        // Take elements from current row
        for(int j=0;j<grid[i].size();j++) {
            ans.push_back(grid[i][j]);
        }

        sort(ans.begin(),ans.end());

        int n=limits[i];

        // Take largest n elements
        for(int j=ans.size()-1;j>=0&&n>0;j--) {
            result.push_back(ans[j]);
            n--;
        }
        ans.clear();
        solve(grid,limits,k,i+1,result);
    }

    long long maxSum(vector<vector<int>>& grid,vector<int>& limits,int k) {

        vector<int> result;
        solve(grid,limits,k,0,result);

        sort(result.begin(),result.end());

        long long sum=0;


        for(int i=result.size()-1;i>=0 && k>0;i--,k--) {
            sum=sum+result[i];
        }
        return sum;
    }
};