//Merge without extra space

//Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.


// Example 1:
//
// Input:
// N = 4, M = 5
// arr1[] = {1, 3, 5, 7}
// arr2[] = {0, 2, 6, 8, 9}
// Output: 0 1 2 3 5 6 7 8 9
// Explanation: Since you can't use any
// extra space, modify the given arrays
// to form
// arr1[] = {0, 1, 2, 3}
// arr2[] = {5, 6, 7, 8, 9}

//using gap method;
class Solution{
public:
    int nextGap(int gap)
    {
        if (gap <= 1)
            return 0;
        return (gap / 2) + (gap % 2);
    }

	void merge(int arr1[], int arr2[], int n, int m) {
	       int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m) {
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }

	}
};
