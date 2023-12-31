// Author : Pooja Vishwakarma
// Date : 07/12/2023
// Problem : Largest Odd Number in String
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/largest-odd-number-in-string/description/


class Solution {
public:
string largestOddNumber(string num) {
    int n = num.length();
    string largest = "";

    for (int i = n - 1; i >= 0; --i) {
        if ((num[i] - '0') % 2 != 0) {
            largest = num.substr(0, i + 1);
            break;
        }
    }

    return largest;
}
};
