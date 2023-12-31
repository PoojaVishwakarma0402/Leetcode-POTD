// Author : Pooja Vishwakarma
// Date : 04/12/2023
// Problem : Largest 3 Same Digit in string
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/largest-3-same-digit-number-in-string/



class Solution {
public:
    string largestGoodInteger(string num) {
        string max_good = "";
        for (int i = 0; i < num.length() - 2; ++i) {
            string substring = num.substr(i, 3);
            if (substring[0] == substring[1] && substring[1] == substring[2]) {
                if (substring > max_good) {
                    max_good = substring;
                }
            }
        }
        return max_good;
    }
};
