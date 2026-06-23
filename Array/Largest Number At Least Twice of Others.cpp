/* 747 : You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

  */

  class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = nums[0];
        int index = 0;

        // Find largest element and its index
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
                index = i;
            }
        }

        // Check if largest is at least twice every other element
        for (int i = 0; i < nums.size(); i++) {
            if (i != index && largest < 2 * nums[i]) {
                return -1;
            }
        }

        return index;
    }
};