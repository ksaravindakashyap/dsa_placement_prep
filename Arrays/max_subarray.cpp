//Maximum Subarray
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.
//Kadane's algorithm to find max sub array sum
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

class Solution {
public:
    int i;
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi = max(sum,maxi);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }

};
