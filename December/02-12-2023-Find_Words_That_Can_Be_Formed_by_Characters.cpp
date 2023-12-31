// Author : Pooja Vishwakarma
// Date : 02/12/2023
// Problem : Find Words That Can Be Formed by Characters
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/




class Solution {
public:
    int countCharacters(std::vector<std::string>& words, std::string chars) {
        std::unordered_map<char, int> charFreq;
        for (char ch : chars) {
            charFreq[ch]++;
        }

        int totalLength = 0;

        for (const std::string& word : words) {
            std::unordered_map<char, int> wordFreq;
            bool isGood = true;

            // Count frequency of characters in the current word
            for (char ch : word) {
                wordFreq[ch]++;
            }

            // Check if the word can be formed from available characters
            for (char ch : word) {
                if (wordFreq[ch] > charFreq[ch]) {
                    isGood = false;
                    break;
                }
            }

            if (isGood) {
                totalLength += word.length();
            }
        }

        return totalLength;
    }
};
