class Solution {
public:
    double trimMean(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int remove = n*5/100;

    long long sum=0;

    for(int i=remove;i<n-remove;i++) {
        sum=sum+arr[i];
    }

    int count=n-2*remove;//no.of remaining element
    return (double)sum/count;
    }
};