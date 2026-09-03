class Solution {
public:
 vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     sort(arr.begin(), arr.end());
    int minimum = INT_MAX;
    for(int i=1;i<arr.size();i++) {
        minimum =min(minimum,arr[i]-arr[i-1]);
    }
    vector<vector<int>> result;
    for(int i=1;i<arr.size();i++) {
        if(arr[i]-arr[i-1]==minimum) {
            result.push_back({arr[i-1],arr[i]});
        }
    }
    return result;
    }
};