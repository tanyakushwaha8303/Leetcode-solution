class Solution {
public:
  vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<pair<int,int>> v;
    vector<int> result;
    int m=mat.size();
    int n=mat[0].size();
    for(int i=0;i<m;i++) {
        int count = 0;
        for(int j=0;j<n;j++) {
            if(mat[i][j]==1) {
                count++;
            }
        }
        v.push_back({i,count});
    }
    sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b) {
        if(a.second==b.second) {
            return a.first<b.first;
        }
        return a.second<b.second;
    });
    for(int i=0;i<k;i++) {
        result.push_back(v[i].first);
    }
    return result;
}
};