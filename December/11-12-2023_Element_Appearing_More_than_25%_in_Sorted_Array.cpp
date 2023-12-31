// Author : Pooja Vishwakarma
// Date : 11/12/2023
// Problem : Element Appearing More than 25% in Sorted Array
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> freq;
        int n = arr.size();
        int threshold = n / 4;

        for (int num : arr) {
            freq[num]++;
            if (freq[num] > threshold) {
                return num;
            }
        }

        return -1; // Return -1 if no special integer found (which shouldn't happen according to the condition)
    }
};
