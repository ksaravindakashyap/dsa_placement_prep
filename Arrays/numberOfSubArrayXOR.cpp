// Count the number of subarrays having a given XOR
//
// Given an array of integers arr[] and a number m, count the number of subarrays having XOR of their elements as m.
// 
// Examples:
//
// Input : arr[] = {4, 2, 2, 6, 4}, m = 6
// Output : 4
// Explanation : The subarrays having XOR of
//               their elements as 6 are {4, 2},
//               {4, 2, 2, 6, 4}, {2, 2, 6},
//                and {6}

int Solution::solve(vector<int>A, int B)
{
	map<int,int> freq;
	int count = 0;
	int xorr = 0;
	for(auto it: A){
		xorr = xorr ^ it;

		if(xorr == B){
			count++;
		}

    if(freq.find(xorr^B)!=freq.end())
    {
      count += freq[xorr ^ B];
    }

    freq[xorr] +=1;
  }
  return count;
}
