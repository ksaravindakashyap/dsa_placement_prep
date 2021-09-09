Triplet Sum in Array

Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X


class Solution{
    public:
    //Function to find if there exists a triplet in the
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        int l,r;
        sort(A,A+n);
        for(int i=0;i<n-2;++i)
        {
            l = i+1;
            r = n-1;
            while(l<r)
            {
                if(A[l]+A[r]+A[i] == X)
                {
                    return true;
                }
                else if(A[l]+A[r]+A[i] < X)
                {
                    l++;
                }
                else
                    r--;
            }
        }

        return false;
    }

};
