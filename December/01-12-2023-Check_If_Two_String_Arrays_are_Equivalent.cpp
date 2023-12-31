// Author : Pooja Vishwakarma
// Date : 01/12/2023
// Problem : Check If Two String Arrays are Equivalent
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/




class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        string str1;
        string str2;

       for(const string& word : word1) {
            str1 += word;
        }

        // Concatenating all strings in word2 to str2
        for(const string& word : word2) {
            str2 += word;
        }

        if(str1!=str2){
            return false;
        }
        for(int i=0;i<str1.size();i++){
            if(str1[i]!=str2[i]){
                return false;
            }
        }
        return true;

        // return str1==str2;   this can be an used to directly compare the strings instead of the for loop used above
        
    }
};
