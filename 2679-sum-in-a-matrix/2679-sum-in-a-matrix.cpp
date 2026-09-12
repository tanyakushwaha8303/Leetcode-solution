class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
      int sum=0;
    for(auto &row:nums) {
        sort(row.begin(),row.end());
    }

    int n=nums[0].size();
    for(int j=n-1;j>=0;j--) {
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            maximum=max(maximum,nums[i][j]);
        }
      sum=sum+maximum;
    }
    return sum;
    }
};