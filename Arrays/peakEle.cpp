// A peak element in an array is the one that is not smaller than its neighbours.
// Given an array arr[] of size N, find the index of any one of its peak elements.
// Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

// Example 1:
//
// Input:
// N = 3
// arr[] = {1,2,3}
// Output: 1
// Explanation: index 2 is 3.
// It is the peak element as it is
// greater than its neighbour 2.



//naive approach

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if(n==1)
       {
           return 0;
       }

        if(arr[0] >= arr[1])
        {
            return 0;
        }

        if(arr[n-1] >= arr[n-2])
        {
            return n-1;
        }

        for(int i=1;i<n-1;i++)
        {
            if((arr[i] >= arr[i-1]) && (arr[i] >= arr[i+1]))
            {
                return i;
            }

        }
    }
};


//Optimized approach

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        return findPeak(nums,0,n-1,n);
    }

    int findPeak(vector<int>& nums, int low, int high, int n)
    {
        int mid = low + (high - low) /2;
        if((mid==0 || nums[mid-1] <= nums[mid]) && (mid==n-1 || nums[mid+1] <= nums[mid]))
        {
            return mid;
        }
        else if(mid > 0 && nums[mid-1] > nums[mid])
            return findPeak(nums,low,(mid-1),n);
        else
            return findPeak(nums,mid+1,high,n);
    }
};
