class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int ans=INT_MIN;
        int index=0;
        for(int i=0;i<arr.size();i++){
         if(arr[i]>=ans){
           ans=max(ans,arr[i]);
           index=i;
         }
        }
         if(index == 0 || index == arr.size()-1) {
        return false;
    }
        bool ans1 = false;
        for(int i=0;i<index;i++){
            if(arr[i]>=arr[i+1]){
                return false;
            }
            
          ans1=true;
        }
        bool ans2 = false;
        for(int i=index;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
           
            ans2=true;
        }
        return ans1 && ans2;
    }
};