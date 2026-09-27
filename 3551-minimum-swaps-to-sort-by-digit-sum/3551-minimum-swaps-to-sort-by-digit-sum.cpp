class Solution {
public:
void solve(vector<int>& nums,vector<int>& ans,int i){
    if(i>=nums.size()){
        return ;
    }
   int n = nums[i];
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    ans.push_back(sum);
      solve(nums,ans, i + 1);
}
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        solve(nums,ans,0);


        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],ans[i]});
        }
           sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {

            if(a.second != b.second)
                return a.second < b.second;

            return a.first < b.first;
        });

       unordered_map<int,int> pos;

        for(int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }

        int swaps = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] == v[i].first)
                continue;

            int j = pos[v[i].first];

            swap(nums[i], nums[j]);
            pos[nums[j]] = j;
            pos[nums[i]] = i;

            swaps++;
        }

        return swaps;
    }
};