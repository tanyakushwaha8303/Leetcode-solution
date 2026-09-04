class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x:nums){
            freq[x]++;
        }

        int middle = nums[nums.size() / 2];

    return freq[middle] == 1;
    }
};