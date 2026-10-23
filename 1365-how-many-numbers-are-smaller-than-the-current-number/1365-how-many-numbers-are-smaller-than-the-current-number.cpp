class Solution {
public:
void solve(vector<int>& nums, vector<int>& ans,int i){
    if(i>=nums.size()){
        return ;
    }
    int count=0;
    for(int j=0;j<nums.size();j++){
        if(i==j){
            continue;
        }
        if(nums[i]>nums[j]){
            count++;
        }
    }
    ans.push_back(count);
    solve(nums,ans,i+1);
}
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
       
       solve(nums,ans,0);
       return ans;
    }
};