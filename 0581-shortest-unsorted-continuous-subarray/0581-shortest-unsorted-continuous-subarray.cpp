class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        int start =0;
        int end=nums.size()-1;
        while(start<nums.size() && nums[start]==arr[start]){
            start++;
        }
        while(end>=0 && nums[end]==arr[end]){
            end--;
        }
        if(start>=end){
            return 0;
        }
        return end-start+1;
    }
};