/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 */
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> prefix(n);

        prefix[0] = nums[0];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }

        int count=0;

        for(int i=0;i<n;i++){

            for(int j=i;j<n;j++){

                int sum;

                if(i==0)
                    sum=prefix[j];
                else
                    sum=prefix[j]-prefix[i-1];

                if(sum==k)
                    count++;
            }
        }

        return count;
    }
}; 