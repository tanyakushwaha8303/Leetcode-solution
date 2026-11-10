class Solution {
public:
 int solve(vector<int>& nums, int k,int i,int& count){
    if(i>=nums.size()){
        return count;
    }
long long product=1;
    for(int j=i;j<nums.size();j++){
        product=product*nums[j];
        if(product>=k){
            break;
        }
        count++;
    }
   return  solve(nums,k,i+1,count);
  }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
     return   solve(nums,k,0,count);
        
    }
};