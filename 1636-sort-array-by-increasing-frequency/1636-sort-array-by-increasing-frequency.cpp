class Solution {
public:
   vector<int> frequencySort(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int,int> freq;
    for(int x : nums) {
        freq[x]++;
    }
    vector<pair<int,int>> v;
    for(auto &p:freq) {
        v.push_back({p.first,p.second});
    }

      sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {

        if(a.second != b.second)
            return a.second < b.second;

        return a.first > b.first;
    });

    // Put elements according to frequency

    for(auto &p:v) {
        while(p.second>0) {
            ans.push_back(p.first);
            p.second--;
        }
    }
    return ans;
}
};