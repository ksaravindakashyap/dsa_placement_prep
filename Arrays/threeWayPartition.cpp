// Three way partitioning.

// Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array.


class Solution{
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int low=0, high=array.size()-1;
        for(int i=0;i<=high;)
        {
            if(array[i] < a )
            {
                swap(array[i++], array[low++]);
            }
            else if (array[i] > b)
            {
                swap(array[i], array[high--]);
            }
            else
                i++;
        }

    }
};
