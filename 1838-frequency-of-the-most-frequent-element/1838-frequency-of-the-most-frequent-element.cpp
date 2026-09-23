class Solution {
public:
        //(4-1) + (4-2) + (4-4)
        //4 + 4 + 4 - (1 + 2 + 4)
        //cost = target * windowSize - windowSum
        //cost = nums[r] * (r-l+1) - sum
    int maxFrequency(vector<int>& nums,int k) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        int l=0;
        int ans=0;
        for (int r=0;r<nums.size();r++) {
            sum=sum+nums[r];
            long long cost=1LL*nums[r]*(r-l+1)-sum;
            while (cost>k) {
                sum=sum-nums[l];
                l++;
                cost=1LL*nums[r]*(r-l+1)-sum;
            }
            ans=max(ans,r-l+1);
        }

        return ans;
    }
};