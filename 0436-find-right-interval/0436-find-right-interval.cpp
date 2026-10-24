
class Solution {
public:
    void solve(vector<vector<int>>& intervals, vector<int>& ans,int i, int j, int& mini, int& idx) {
        if (j == intervals.size()) {
            ans[i] = idx;
            return;
        }
        if (intervals[j][0] >= intervals[i][1]) {
            if (idx == -1 || intervals[j][0] < mini) {
                mini = intervals[j][0];
                idx = j;
            }
        }
        solve(intervals, ans, i, j + 1, mini, idx);
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ans(n, -1);
        for (int i = 0; i < n; i++) {
            int mini = 0;
            int idx = -1;
            solve(intervals, ans, i, 0, mini, idx);
        }
        return ans;
    }
};
