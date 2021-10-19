Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and
smallest positive missing number is 1.





class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        for(int i=0;i<n;i++){
            int c=(arr[i]-1)%(n);
            arr[c]+=(n);
        }
        int *a=new int[2];
        for(int i=0;i<n;i++){
            // cout<<arr[i]<<' ';
            if(arr[i]>2*n){
                a[0]=i+1;
            }
            else if(arr[i]<=n){
                a[1]=i+1;
            }
        }
        // cout<<'\n';
        return a;
    }
};
