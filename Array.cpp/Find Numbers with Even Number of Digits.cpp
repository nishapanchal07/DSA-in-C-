//1295 : Given an array nums of integers, return how many of them contain an even number of digits.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            if (to_string(num).length() % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
