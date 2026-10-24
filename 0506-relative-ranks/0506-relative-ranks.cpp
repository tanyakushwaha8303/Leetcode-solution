

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result(score.size());
        vector<int> ans;

        for (int i=0;i<score.size();i++) {
            ans.push_back(score[i]);
        }
        sort(ans.rbegin(),ans.rend());
        map<int,string> mp;
        for (int i=0;i<ans.size();i++) {
            if (i==0)
                mp[ans[i]]="Gold Medal";
            else if (i==1)
                mp[ans[i]]="Silver Medal";
            else if (i==2)
                mp[ans[i]]="Bronze Medal";
            else
                mp[ans[i]]=to_string(i + 1);
        }
        for (int i=0;i<score.size();i++) {
            result[i]=mp[score[i]];
        }
        return result;
    }
};
