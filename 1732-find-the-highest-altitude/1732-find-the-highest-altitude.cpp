class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0;
        int ans=INT_MIN;
       
        for(int i=0;i<gain.size();i++){
          altitude=altitude+(gain[i]);
          ans=max(ans,altitude);
        }
       if(ans<1){
        return 0;
       }
       return ans;
    }
};