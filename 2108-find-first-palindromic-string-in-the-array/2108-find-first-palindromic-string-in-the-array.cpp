class Solution {
public:
string solve(vector<string>& words,int i) {
    if (i>=words.size()) {
        return "";
    }

    string ans=words[i];

    int left=0;
    int right=ans.size()-1;

    while (left<right) {
        if (ans[left]!=ans[right]) {
            break;
        }
        left++;
        right--;
    }

    if (left>=right) {
        return ans;
    }

    return solve(words,i+1);
}
string firstPalindrome(vector<string>& words) {
    return solve(words,0);
}
};