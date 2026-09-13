class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {

        vector<int> ans;
        vector<vector<int>> result;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
             ans.push_back(i);
             ans.push_back(j);
             result.push_back(ans);
              ans.clear();
            }
        }

         sort(result.begin(), result.end(), [&](vector<int>& a, vector<int>& b){

        int distA = abs(a[0] - rCenter) + abs(a[1] - cCenter);
        int distB = abs(b[0] - rCenter) + abs(b[1] - cCenter);

        return distA < distB;
    });
        return result;
    }
};