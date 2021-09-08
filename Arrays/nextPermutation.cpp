//Next permutation problem
// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
// The replacement must be in place and use only constant extra memory.
// Example 1:
//
// Input: nums = [1,2,3]
// Output: [1,3,2]

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k,l, n=nums.size();
        for(k= n-2;k>=0;k--)
        {
            if(nums[k]<nums[k+1])
            {
                break;
            }
        }

        if(k<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else{
            for(l=n-1;l>=0;l--)
            {
                if(nums[l]>nums[k])
                    break;
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1, nums.end());
        }
    }
};
