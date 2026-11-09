class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;

        for(int x:nums){
            freq[x]++;
        }
        
        int n=nums.size()-1;
          for(int i = 1; i < n; i++) {
        if(freq[i] != 1) {
            return false;
        }
    }
    if(freq[n] != 2) {
        return false;
    }

        return true;
    }
};