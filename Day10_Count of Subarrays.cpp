// Count of Subarrays 

// Given an array of N positive integers  Arr1, Arr2 ............ Arrn. The value of each contiguous subarray of given array is the maximum element present in that subarray. The task is to return the number of subarrays having value strictly greater than K.

// Example 1:

// Input:
// N = 3, K = 2
// Arr[] = {3, 2, 1}
// Output: 3
// Explanation: The subarrays having value
// strictly greater than K are: [3], [3, 2]
// and [3, 2, 1]. Thus there are 3 such
// subarrays.


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long countSubarray(int arr[], int n, int k){
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[j]>k){
                    ans+=(n-j);
                    break;
                }
            }
        }
        return ans;
    }
};