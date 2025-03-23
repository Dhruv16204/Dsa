// 1047. Remove All Adjacent
// Duplicates In String


// class Solution {
// public:
//     string removeDuplicates(string s) {
//         int n = s.length();
//         // initialize ans as empty string
//         string ans = "";

//         for (int i = 0; i < n; i++) {
//             char currCharacter = s[i];

//             if (ans.empty()) {
//                 // agar ans empty hai to insert karo
//                 ans.push_back(currCharacter);
//             } else if (currCharacter == ans.back()) {
//                 // agar current character is same as the last char of ans(for
//                 // this .back is used)
//                 // to pop kardo
//                 ans.pop_back();
//             } else if (currCharacter != ans.back()) {
//                 // same nahi hai to push kardo
//                 ans.push_back(currCharacter);
//             }
//         }
//         return ans;
//     }
// };