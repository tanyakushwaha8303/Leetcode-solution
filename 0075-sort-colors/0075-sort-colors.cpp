class Solution {
public:
    void sortColors(vector<int>& nums) {

    unordered_map<int, int> freq;
   for(int i:nums){
       freq[i]++;
   }
    int i = 0;
    for(int j = 0; j < 3; j++) {
        while(freq[j] > 0) {
            nums[i] = j;
            i++;
            freq[j]--;
        }
    }
}
};