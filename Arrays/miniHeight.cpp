// Minimize the Heights II
//
// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer.
// Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.




class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort (arr, arr+n);
        int ans = arr[n-1]-arr[0];
        int x = 1;
        while (arr[x]-k < 0) x++;
        for (; x<n; x++) {
        int mn = min(arr[0]+k, arr[x]-k);
        int mx = max(arr[n-1]-k, arr[x-1]+k);
        ans = min(mx-mn, ans);
        }
        return ans;
    }
};
