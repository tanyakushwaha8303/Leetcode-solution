class Solution {
public:
int solve(int i,vector<int>&nums){
    if(i>=nums.size()){
        return -1;
    }
    int sum=0;
    int n=nums[i];

    while(n>0){
    int digit=n%10;
    sum =sum+digit;
    n = n/10;
    }

    if(sum==i){
         return i;
    }
   return   solve(i+1,nums);
   
  }
    int smallestIndex(vector<int>& nums) {
     return  solve(0,nums);
    }
};