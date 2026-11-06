class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int,int> freq;

    for(int i:nums) {
        freq[i]++;
    }
    while(true) {
        vector<int> temp;
        bool found=false;

        for(auto &it:freq) {
            if(it.second>0) {
                temp.push_back(it.first);
                it.second--;
                found = true;
            }
        }
        if(found==false) {
            break;
        }
        sort(temp.begin(), temp.end());
        for(int i=0;i<temp.size();i++) {
            ans.push_back(temp[i]);
        }
    }
    return ans;
}
};