/* 189 :  Given an integer array nums, rotate the array to the right by k steps, where k is non-negative. */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());          // whole array
        reverse(nums.begin(), nums.begin() + k);    // first k elements
        reverse(nums.begin() + k, nums.end());      // remaining elements
    }
};
