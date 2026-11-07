class Solution {
public:
// int solve(vector<vector<int>>& result, vector<int>& ans,int i,int count,vector<int>& dp){
//     if(i>=result.size()){
//         return count;
//     }
//     if(dp[i]!=-1){
//         return count+dp[i];
//     }
//     for(int j = 0; j < result[i].size(); j++) {
//        ans.push_back(result[i][j]);
//     }
//     int sum=0;
//     for(int i=0;i<ans.size();i++){
//         sum=sum+ans[i];
//     }
//     int add=0;
//     if(sum%2!=0){
//       count++;
//     }
//     ans.clear();
//     dp[i] = add;
//    return  solve(result,ans,i+1,count+dp[i],dp);
    
// }
//     int numOfSubarrays(vector<int>& arr) {
//         vector<vector<int>> result;
//         vector<int> ans;
//         for(int i=0;i<arr.size();i++){
//             for(int j=i;j<arr.size();j++){
//                 ans.push_back(arr[j]);
//                 result.push_back(ans);
//             }
//             ans.clear();
//         }
//          vector<int> dp(result.size(), -1);
//       return solve(result,ans,0,0,dp);
      
//     }
int numOfSubarrays(vector<int>& arr) {
    int mod=1e9+7;
    int odd=0;
    int even=1;
    int sum=0;
    int count=0;
    for(int i=0;i<arr.size();i++) {
        sum =sum+arr[i];
        if(sum%2!=0) {
            count=(count+even)%mod;
            odd++;
        }
        else {
            count=(count+odd)%mod;
            even++;
        }
    }
    return count;
}
};