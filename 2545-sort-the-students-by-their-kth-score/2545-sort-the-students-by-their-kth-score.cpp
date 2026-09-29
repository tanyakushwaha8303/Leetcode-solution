class Solution {
public:
    void solve(vector<vector<int>>& score,int k,int i) {
        if (i>=score.size()-1) {
            return;
        }
        int maxi = i;
        for (int j=i+1;j<score.size();j++) {
            if (score[j][k]>score[maxi][k]) {
                maxi=j;
            }
        }
        swap(score[i],score[maxi]);
        solve(score,k,i+1);
    }

    vector<vector<int>> sortTheStudents(vector<vector<int>>& score,int k) {
        solve(score,k,0);
        return score;
    }
};