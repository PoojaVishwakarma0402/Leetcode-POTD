
// Author : Pooja Vishwakarma
// Date : 26/12/2023
// Problem : Number of Dice Rolls With Target Sum
// Difficulty : Medium
// Problem Link : https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/

class Solution {
public:
     
    //  using recursion (faces overlapping sub problems hence memoize it using dp i.e store already removed values in dp )
    // int solve(int dice, int faces, int target){
    //     if(dice==0 && target!=0)
    //         return 0;
    //     if(target==0 && dice!=0)
    //         return 0;
    //     if(target<0)
    //         return 0;
    //     if(dice==0 && target==0)
    //         return 1;
        
    //     int ans=0;

    //     for(int i=0;i<faces;i++){
    //         ans+=solve(dice-1,faces,target-i);
    //     }

    //     return ans;
    // }


    // using dp
    long long solveMem(int dice, int faces, int target, vector<vector<long long>>& dp) {
    int MOD = 1000000007;
    if (dice == 0 && target != 0) return 0;
    if (target == 0 && dice != 0) return 0;
    if (target < 0) return 0;
    if (dice == 0 && target == 0) return 1;
    if (dp[dice][target] != -1) return dp[dice][target];

    long long ans = 0;

    for (int i = 1; i <= faces; ++i) {
        if (target - i >= 0) {
            ans = (ans + solveMem(dice - 1, faces, target - i, dp)) % MOD;
        }
    }

    return dp[dice][target] = ans;
}

int numRollsToTarget(int n, int k, int target) {
    vector<vector<long long>> dp(n + 1, vector<long long>(target + 1, -1));
    int ans = solveMem(n, k, target, dp);
    return ans;
}

};
