// class Solution {
// public:

//     bool isValidSerialization(string preorder) {
//         int slots=1;

//         for (int i=0;i<preorder.size();i++) {
//             if (preorder[i]==',')
//                 continue;

//             if (slots==0)//abhi aur entries baki hai but slot zero ho gya to false hoga abhi bhi loop ke andr hai
//                 return false;

//             if (preorder[i]=='#') {
//                 slots--;
//             } 
//             else {
//                 //slots=slots-1+2//ek fill kiya 2 create kiye
//                 slots--;//nodes empty slot mai daal diya
//                 slots=slots+ 2;// aur phir 2 slots bana diye child nodes ke liye
//             }
//         }
//         return slots == 0;// loop se bahr niklne ke baad slot zero hua hai means koi entries nhi hai aur valid tree hai
//     }
// };
// if 1 se zada chracter present ho like 92 so use this code agr code 1 character ka ho like 9 then above code is right
class Solution {
public:
    bool isValidSerialization(string preorder) {
        int slots = 1;
        string token = "";

        for (int i = 0; i <= preorder.size(); i++) {
            if (i == preorder.size() || preorder[i] == ',') {
                if (slots == 0)
                    return false;
                if (token == "#") {
                    slots--;
                } 
                else {
                    slots++;  // One slot used, two created
                }

                token = "";
            } 
            else {
                token += preorder[i];
            }
        }
        return slots == 0;
    }
};