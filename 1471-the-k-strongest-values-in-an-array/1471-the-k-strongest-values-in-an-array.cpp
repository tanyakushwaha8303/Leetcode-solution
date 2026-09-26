class Solution {
public:
   vector<int>getStrongest(vector<int>& arr, int k) {
    sort(arr.begin(),arr.end());

    int n=arr.size();
    int mid=(n-1)/2;

    vector<pair<int,int>> v;
    vector<int>result;

    for(int i=0;i<n;i++) {
        int distance=abs(arr[i]-arr[mid]);
        v.push_back({arr[i],distance});
    }

    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b) {
        if(a.second!=b.second)
            return a.second>b.second;

        return a.first>b.first;
    });

    for(int i=0;i<k;i++) {
        result.push_back(v[i].first);
    }
    return result;
}
};