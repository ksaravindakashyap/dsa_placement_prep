//JS SOLUTION

// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
// Example 1:
//
// Input:
// 5
// 4 2 -3 1 6
//
// Output:
// Yes
//
// Explanation:
// 2, -3, 1 is the subarray
// with sum 0.



class Solution {
    //Function to check whether there is a subarray present with 0-sum or not.
    subArrayExists(arr, n){
        const sumSet = new Set();
        let sum=0;
        for(let i=0;i<arr.length;++i)
        {
            sum+=arr[i];
            if(sum===0 || sumSet.has(sum))
                return true;
            sumSet.add(sum);
        }
        return false;
    }

}
