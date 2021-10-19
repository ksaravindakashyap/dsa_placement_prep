

Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.


Example 1:

Input:
N = 2
A[] = {1, 10}
Output:
1
Explanation:
A[0]<A[1] so (j-i) is 1-0 = 1.



class Solution{
    public:

    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N)
    {
        // int maxi=0,ans=0;
        // for(int i=0;i<N;i++)
        // {
        //     int left=1,right=N-1;
        //     while(left <= right)
        //     {
        //         if(A[i] < A[left] || A[i] < A[right])
        //         {
        //             maxi = max(left-i,right-i);
        //             if(ans < maxi)
        //             {
        //                 ans = maxi;
        //             }
        //         }
        //         left++;right--;
        //     }
        // }
        // return ans;
        int maxdiff,i,j;

        int* Lmin = new int[(sizeof(int)) *N];
        int* Rmax = new int[(sizeof(int)) *N];

        Lmin[0] = A[0];
        for(i=1;i<N;i++)
        {
            Lmin[i] = min(A[i], Lmin[i-1]);
        }

        Rmax[N-1] = A[N-1];
        for(j=N-2;j>=0;j--)
        {
            Rmax[j] = max(A[j],Rmax[j+1]);
        }

        i=0,j=0,maxdiff=-1;
        while(i<N && j<N)
        {
            if(Lmin[i]<=Rmax[j])
            {
                maxdiff = max(maxdiff,j-i);
                j+=1;
            }
            else{
                i+=1;
            }

        }
        return maxdiff;
    }
};
