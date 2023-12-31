
// Author : Pooja Vishwakarma
// Date : 24/12/2023
// Problem : Minimum Changes To Make Alternating Binary String
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/




class Solution {
public:
    int minOperations(string s) {
        int count1 = 0, count2 = 0;

        // Start comparing with '0' as the first character
        for (int i = 0; i < s.size(); ++i) {
            if (i % 2 == 0) {
                // If '0' expected at even index
                if (s[i] == '1') {
                    count1++;
                } else {
                    count2++;
                }
            } else {
                // If '1' expected at odd index
                if (s[i] == '0') {
                    count1++;
                } else {
                    count2++;
                }
            }
        }

        return min(count1, count2);
    }
};
