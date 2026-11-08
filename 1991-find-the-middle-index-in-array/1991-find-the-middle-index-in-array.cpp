class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
         sum=sum+nums[i];
        }
        int leftsum=0;
       for(int i = 0; i <nums.size(); i++) {
       sum=sum-nums[i];  
        if(leftsum==sum) {
            return i;
        }
        leftsum=leftsum+nums[i];
    }
    return -1;
    }
};