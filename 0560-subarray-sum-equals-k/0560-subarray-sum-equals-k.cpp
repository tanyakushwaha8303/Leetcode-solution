class Solution {
public:
void solve(vector<int>& nums, int k,int i,int& count){
    if(i>=nums.size()){
        return;
    }
    int sum=0;
    for(int j=i;j<nums.size();j++){
       sum=sum+nums[j];
       
     if(sum==k) {
        count++;
       }
    
    }
    solve(nums,k,i+1,count);
}
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        solve(nums,k,0,count);
        return count;
    }
};