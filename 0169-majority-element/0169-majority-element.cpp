class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int> freq;
        for(int x: nums){
            freq[x]++;
        }
       
         int n = nums.size();

    for(int x : nums){
        int count = freq[x];

        if(count > n / 2){  
            return x;        
        }
    }
        return -1;
    }
};