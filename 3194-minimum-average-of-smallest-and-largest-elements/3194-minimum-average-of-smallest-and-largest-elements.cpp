class Solution {
public:
void solve(vector<int>& nums,vector<double>& ans,int i,int j){
    if(i>=j){
        return ;
    }
   double avg=(nums[i]+nums[j])/2.0;
    ans.push_back(avg);
    solve(nums,ans,i+1,j-1);
}
    double minimumAverage(vector<int>& nums) {
        vector<double> ans;
        sort(nums.begin(),nums.end());
        solve(nums,ans,0,nums.size()-1);
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};