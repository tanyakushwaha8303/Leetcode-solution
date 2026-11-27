class Solution {
public:
int solve1(vector<int>& nums,int index,int& count) {
    if(index==nums.size()) {
        count++;
        return count;
    }
    for(int i=index;i<nums.size();i++) {
        swap(nums[index],nums[i]);
        // Check divisibility condition
        if(nums[index]%(index+1)==0||(index+1)%nums[index]==0) {
            solve1(nums,index+1,count);
        }
        // Backtracking
        swap(nums[index],nums[i]);
    }
    return count;
}
int countArrangement(int n) {
    vector<int> nums;
    for(int i=1;i<=n;i++) {
        nums.push_back(i);
    }
    int count=0;
    return solve1(nums,0,count);
}
};