Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Example 1:

Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180
Explanation: Subarray with maximum product
is [6, -3, -10] which gives product as 180.


long long maxProduct(vector<int> arr, int n)
	{
	    long long int minVal = arr[0];
        long long int maxVal = arr[0];

        long long int maxProduct = arr[0];

    for (int i = 1; i < n; i++) {

        // When multiplied by -ve number,
        // maxVal becomes minVal
        // and minVal becomes maxVal.
        if (arr[i] < 0)
            swap(maxVal, minVal);

        long long int x=maxVal*arr[i];
        long long int a=arr[i];
        long long int y=minVal*arr[i];
        maxVal = max(a, x);
        minVal = min(a, y);

        // Max Product of array.
        maxProduct = max(maxProduct, maxVal);
    }

    // Return maximum product found in array.
    return maxProduct;
	}
};


class Solution{
public:
    long long max(long long a, long long b){
        return a>b?a:b;
    }
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long suffix = 0, prefix = 0, result = arr[0];

        for(int i = 0;i<n;i++){
            suffix = (suffix?suffix:1) * arr[i];
            prefix = (prefix?prefix:1) * arr[ n - 1 - i];

            result = max(result, max(suffix, prefix));
        }
        return result;
	}
};
