// Author : Pooja Vishwakarma
// Date : 12/12/2023
// Problem : Maximum Product of Two Elements in an Array
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/




class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN;

        for (int num : nums) {
            if (num >= max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};
