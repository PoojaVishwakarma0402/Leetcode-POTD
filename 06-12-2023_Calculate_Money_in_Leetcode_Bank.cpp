// Author : Pooja Vishwakarma
// Date : 06/12/2023
// Problem : Calculate Money in Leetcode Bank
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/



class Solution {
public:
    
int totalMoney(int n) {
    int total = 0;
    int currentMoney = 1; // Initial amount on Monday

    string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (int day = 1; day <= n; ++day) {
        total += currentMoney; // Add the current amount to the total

        

        // Update for the next day
        if (day % 7 == 0) {
            // Reset the amount for the next Monday
            currentMoney = day / 7 + 1;
        } else {
            // Increment the amount for the next day of the week
            ++currentMoney;
        }
    }

    return total;
}

};
