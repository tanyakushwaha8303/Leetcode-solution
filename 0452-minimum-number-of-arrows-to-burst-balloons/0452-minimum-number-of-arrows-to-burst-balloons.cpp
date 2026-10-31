class Solution {
public:
 
     void solve(vector<vector<int>>& points, int i, int end, int &count) {
        if(i == points.size()) {
            return;
        }
        if(points[i][0]>end) {
            count++;
            end=points[i][1];
        }
        else {
            end = min(end, points[i][1]);
        }
        solve(points,i+1,end,count);
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        sort(points.begin(),points.end());
        int count = 1;
        solve(points,1,points[0][1],count);
        return count;
    }
};