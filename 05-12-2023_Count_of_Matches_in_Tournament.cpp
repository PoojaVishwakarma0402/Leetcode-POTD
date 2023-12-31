// Author : Pooja Vishwakarma
// Date : 05/12/2023
// Problem : Count of Matches in Tournament
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/count-of-matches-in-tournament/description/



class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                matches += n / 2;
                n /= 2;
            } else {
                matches += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return matches;
    }
};
