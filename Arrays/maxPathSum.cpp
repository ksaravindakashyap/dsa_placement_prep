Given two sorted arrays A and B of size M and N respectively. Each array contains only distinct elements but may have some elements in common with the other array. Find the maximum sum of a path from the beginning of any array to the end of any of the two arrays. We can switch from one array to another array only at the common elements.
Note: Only one repeated value is considered in the valid path sum.


Example 1:

Input:
M = 5, N = 4
A[] = {2,3,7,10,12}
B[] = {1,5,7,8}
Output: 35
Explanation: The path will be 1+5+7+10+12
= 35.





class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int result=0,i=0,j=0,sum1=0,sum2=0;

        while(i<l1 && j<l2)
        {
            if(A[i] < B[j])
            {
                sum1+=A[i++];
            }
            else if(A[i] > B[j])
            {
                sum2 += B[j++];

            }
            else{
                result += max(sum1,sum2) + A[i];
                sum1=0;
                sum2=0;
                i++;j++;
            }
        }

        while(i<l1)
        {
            sum1+=A[i++];
        }
        while(j<l2)
        {
            sum2+=B[j++];
        }

        result += max(sum1,sum2);
        return result;
    }
};
