class Solution {
public:
    bool halvesAreAlike(string s) {
    
    char list[]={'a','e','i','o','u','A','E','I','O','U'};

    int i=0;
    int j=s.length();

    int mid=(i+j)/2;

    string s1=s.substr(i,mid);
    string s2=s.substr(mid,mid);

    int count1 = 0;

    for(int a=0;a<s1.length();a++) {
        for(int b=0;b<10;b++) {
            if(s1[a]==list[b]) {
                count1++;
                break;
            }
        }
    }

    int count2=0;

    for(int c=0;c<s2.length();c++) {
        for(int d=0;d<10;d++) {
            if(s2[c]==list[d]) {
                count2++;
                break;
            }
        }
    }

    if(count1==count2)
        return true;

    return false;
}
};