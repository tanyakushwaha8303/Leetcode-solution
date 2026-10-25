class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int> ans;

    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            ans.push_back(nums[i]);
            break;
        }
    }


 for (int i = 1; i <= nums.size(); i++) {
            if (!binary_search(nums.begin(), nums.end(), i)) {
                ans.push_back(i);
                break;
            }
        } 


    return ans;
}
};