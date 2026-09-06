class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    
        int sum1=0;
        for(int i=0;i<aliceSizes.size();i++){
            sum1=sum1+aliceSizes[i];
        }

         int sum2=0;
        for(int i=0;i<bobSizes.size();i++){
            sum2=sum2+bobSizes[i];
        }
        
         int diff = (sum2 - sum1) / 2;

    for(int a : aliceSizes) {
        for(int b : bobSizes) {
            if(b - a == diff) {
                return {a, b};
            }
        }
    }

    return {};

    }
};