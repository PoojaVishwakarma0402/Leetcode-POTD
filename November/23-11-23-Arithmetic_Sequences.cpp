
class Solution {
public:
    bool isArithmetic(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); ++i) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;
        for (int i = 0; i < l.size(); ++i) {
            int left = l[i];
            int right = r[i];

            vector<int> subarray(nums.begin() + left, nums.begin() + right + 1);
            result.push_back(isArithmetic(subarray));
        }
        return result;
    }
};
