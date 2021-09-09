// Smallest subarray with sum greater than x
//
// Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.
//
// Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).


class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int sum=0, min_len=n+1;
        int start=0,end=0;
        while(end < n)
        {
            while(sum <= x && end < n)
                sum += arr[end++];

            while(sum > x && start < n){
                if(end - start < min_len)
                {
                    min_len = end - start;
                }

                sum -= arr[start++];
            }
        }
        return min_len;
    }
}
