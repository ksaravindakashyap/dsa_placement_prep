//Reverse pairs


// Given an integer array nums, return the number of reverse pairs in the array.
// A reverse pair is a pair (i, j) where 0 <= i < j < nums.length and nums[i] > 2 * nums[j].


// Example 1:
//
// Input: nums = [1,3,2,3,1]
// Output: 2


//Brute force
class Solution {
public:
    int count = 0;
    int reversePairs(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;++i)
        {
            for(int j=i+1;j<nums.size();++j)
            {
                if(nums[i] > (2*nums[j]))
                {
                    ++count;
                }
            }
        }
        return count;
    }
};


//Optimised merge sort method
class Solution {
public:
    int merge(vector<int> &nums, int low, int mid, int high )
    {
        int count=0;
        int j=mid+1;
        for(int i=low;i<=mid;++i){
            while(j<=high && nums[i] > 2LL * nums[j]){
                ++j;
            }
            count += (j-(mid+1));
        }

    vector<int> temp;
    int left = low, right = mid+1;
    while(left <= mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left++]);
        }
        else{
            temp.push_back(nums[right++]);
        }
    }

    while(left<=mid)
    {
        temp.push_back(nums[left++]);
    }
    while(right<=high)
    {
        temp.push_back(nums[right++]);
    }
    for(int i=low; i<=high; ++i)
    {
        nums[i] = temp[i - low];
    }
    return count;
}
    int mergeSort(vector<int> &nums, int low, int high)
    {
        if(low>=high) return 0;
        int mid = (low+high)/2;
        int inv = mergeSort(nums, low, mid);
        inv += mergeSort(nums,mid+1,high);
        inv += merge(nums, low, mid, high);
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};
