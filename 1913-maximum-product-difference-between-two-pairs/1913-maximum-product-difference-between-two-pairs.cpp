class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int pro1=nums[0]*nums[1];
        int pro2=nums[nums.size()-1]*nums[nums.size()-2];
        int product=pro2-pro1;
        return product;
    }
};