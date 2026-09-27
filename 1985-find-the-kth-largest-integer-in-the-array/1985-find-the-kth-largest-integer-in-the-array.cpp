class Solution {
public:

    void solve(vector<string>& nums, vector<string>& ans, int i) {
        if(i>=nums.size()) {
            return;
        }
        ans.push_back(nums[i]);
        solve(nums, ans, i + 1);
    }
    string kthLargestNumber(vector<string>& nums,int k) {
        vector<string> ans;
        solve(nums,ans,0);

        sort(ans.begin(),ans.end(),[](string a,string b) {

            if(a.size()!=b.size())
                return a.size()>b.size();

            return a>b;
        });
        return ans[k-1];
    }
};