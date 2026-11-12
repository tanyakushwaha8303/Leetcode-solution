class Solution {
public:
  
int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();

    int srow = 0;
    int scol = 0;
    int erow = n-1;
    int ecol = n-1;

    int sum=0;

    while(srow<=erow) {
        sum=sum+mat[srow][scol];

        if(scol!=ecol) {
            sum=sum+mat[srow][ecol];
        }
        srow++;
        scol++;
        ecol--;
    }
    return sum;
}

};