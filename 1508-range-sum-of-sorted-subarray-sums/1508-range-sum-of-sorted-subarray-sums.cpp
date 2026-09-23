class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
    vector<int> ans;

   for(int i=0;i<nums.size();i++){
     int sum=0;
    for(int j=i;j<nums.size();j++){
          sum=sum+nums[j];
         ans.push_back(sum);
        } 
   }
 sort(ans.begin(),ans.end());
 long long sum = 0;

    for(int i = left - 1; i <= right - 1; i++) {
        sum += ans[i];
        sum %= 1000000007;
    }
return sum;
    }
};