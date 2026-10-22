class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
      vector<int> ans;
      for(int i=0;i<heights.size();i++){
        ans.push_back(heights[i]);
      }
      sort(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++){
        if(ans[i]!=heights[i]){
            count++;
        }
      }
      return count;
    }
};