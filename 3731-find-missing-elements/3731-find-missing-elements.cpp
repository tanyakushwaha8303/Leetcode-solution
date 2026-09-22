class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        
           for (int i=0;i<nums.size()-1;i++) {
               if (nums[i+1]!=nums[i]+1) {
                int x=nums[i]+1;
            while (x!=nums[i+1]) {
                ans.push_back(x);
                x++;
            }
        }
    }
        return ans;
    }
};