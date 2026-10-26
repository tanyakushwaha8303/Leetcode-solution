class Solution {
public:
   void solve(vector<string>& timePoints,vector<int>& ans,int i){
    if(i>=timePoints.size()){
        return ;
    }
    string time = timePoints[i];
    
    int hours = (time[0] - '0') * 10 + (time[1] - '0');
    int minutes = (time[3] - '0') * 10 + (time[4] - '0');

    int total = hours * 60 + minutes;
    ans.push_back(total);
    solve(timePoints,ans,i+1);
   }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> ans;
        solve(timePoints,ans,0);
        sort(ans.begin(),ans.end());
        int mini=INT_MAX;
        for(int i=1;i<ans.size();i++){
           int difference=ans[i]-ans[i-1];
           mini=min(mini,difference);
        }
        // Check the difference across midnight
int difference = 1440 - ans.back() + ans[0];
mini = min(mini, difference);

return mini;
    }
};