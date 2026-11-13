class Solution {
public:
    void solve(string& s,int i,long long& num,int sign) {
        if(i>=s.size()||!isdigit(s[i])) return;

        num=num*10+(s[i]-'0');
        if(sign==1 && num>INT_MAX)
            num=INT_MAX;

        if(sign==-1 && num>2147483648LL)
            num=2147483648LL;

        solve(s,i+1,num,sign);
    }

    int myAtoi(string s) {
        int i=0,sign=1;
        long long num=0;

        while(i<s.size() && s[i]==' ')
            i++;
        if(i<s.size() && (s[i]=='+'||s[i]=='-')){
            if(s[i] == '-') 
            sign = -1;
            i++;
        }

        solve(s,i,num,sign);
        return sign*num;
    }
};