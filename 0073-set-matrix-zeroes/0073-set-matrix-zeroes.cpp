class Solution {
public:
void solve(vector<vector<int>>& matrix,int i,int j){
     for(int col = 0; col < matrix[0].size(); col++) {
        matrix[i][col] = 0;
    }

    for(int row = 0; row < matrix.size(); row++) {
        matrix[row][j] = 0;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> original = matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(original[i][j]==0){
                    solve(matrix,i,j);
                }
            }
        }
    }
};