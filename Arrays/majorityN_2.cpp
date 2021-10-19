Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array


class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<size;i++)
        {
            mpp[a[i]]++;
        }
        for(int i=0;i<size;i++)
        {
            if(mpp[a[i]] > (size/2))
            {
                return a[i];
            }
        }
        return -1;
    }
};
