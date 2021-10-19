// Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.
 
// Example 1:
//
// Input :
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output :
// 1  3  2  11  6  -1  -7  -5


class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int j=0,pivot=0,h=0;
        int temp[n];
        for(int i=0,l=0;i<n;i++)
        {
            if(arr[i]<pivot)
            {
                temp[l] = arr[i];
                l++;
            }
            if(arr[i] > pivot)
            {
                swap(arr[i],arr[j]);
                j++;
            }

        }
        for(int k=j;k<n;k++)
        {
            arr[k] = temp[h];
            h++;
        }

    }
};
