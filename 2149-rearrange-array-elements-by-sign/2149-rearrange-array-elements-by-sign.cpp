class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2;
        vector<int> ans;

        for(int x:nums){
            if(x>=1){
                ans1.push_back(x);
            }
            else{
                ans2.push_back(x);
            }
        }
       int i=0;
       int j=0;
        while(i<ans1.size() && j<ans2.size()){
           
                ans.push_back(ans1[i]);
                ans.push_back(ans2[j]);
                i++;
                j++;
            
            
        }
   return ans;
    }
};