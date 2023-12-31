
// Author : Pooja Vishwakarma
// Date : 27/12/2023
// Problem : Minimum Time to Make Rope Colorful
// Difficulty : Medium
// Problem Link : https://leetcode.com/problems/minimum-time-to-make-rope-colorful/submissions/1129902396/
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int total_time = 0;

        for (int i = 1; i < n; ++i) {
            if (colors[i] == colors[i - 1]) {
                total_time += min(neededTime[i], neededTime[i - 1]);
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        
        return total_time;
    }
};
