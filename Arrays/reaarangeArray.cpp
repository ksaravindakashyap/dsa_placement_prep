// Rearrange array in alternating positive & negative items with O(1) extra space
//
// Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa maintaining the order of appearance.
// Number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear in the end of the array.
//
// Examples :
//
// Input:  arr[] = {1, 2, 3, -4, -1, 4}
// Output: arr[] = {-4, 1, -1, 2, 3, 4}
//
// Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

int partition(int A[], int n)
{
    int j = 0;
    int pivot = 0;    // consider 0 as a pivot
    // each time we find a negative number, `j` is incremented,
    // and a negative element would be placed before the pivot
    for (int i = 0; i < n; i++)
    {
        if (A[i] < pivot)
        {
            swap(A[i], A[j]);
            j++;
        }
    }
    return j;
}

int rearrange(int A[], int size)
{
    int p = partition(A, size);
    for (int n = 0; (p < size && n < p); p++, n += 2) {
        swap(A[n], A[p]);
    }
}
