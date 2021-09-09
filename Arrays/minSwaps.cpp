// Minimum swaps and K together 
// Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.


int minSwap(int *arr, int n, int k) {
    int count = 0;
    for(int i=0;i<n;++i)
    {
        if(arr[i] <= k)
            ++count;
    }


    int bad = 0;
    for(int i=0;i<count;++i)
    {
        if(arr[i] > k)
        {
            ++bad;
        }
    }

    int ans = bad;
    for(int i=0, j =count ;j<n;++i, ++j)
    {
        if(arr[i] > k)
            --bad;
        if(arr[j] > k)
            ++bad;

        ans = min(ans, bad);
    }
    return ans;
}
