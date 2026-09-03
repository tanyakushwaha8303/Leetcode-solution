class Solution {
public:
   vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                      vector<vector<int>>& items2) {

    sort(items1.begin(), items1.end());
    sort(items2.begin(), items2.end());

    vector<vector<int>> result;

    int i = 0, j = 0;

    while(i < items1.size() && j < items2.size()) {

        if(items1[i][0] == items2[j][0]) {
            result.push_back({ items1[i][0],items1[i][1] + items2[j][1]});
            i++;
            j++;
        }
        else if(items1[i][0] < items2[j][0]) {
            result.push_back(items1[i]);
            i++;
        }
        else {
            result.push_back(items2[j]);
            j++;
        }
    }

    while(i < items1.size()) {
        result.push_back(items1[i]);
        i++;
    }

    while(j < items2.size()) {
        result.push_back(items2[j]);
        j++;
    }

    return result;
}
};