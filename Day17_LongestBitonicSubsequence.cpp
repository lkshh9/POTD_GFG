// Longest Bitonic subsequence

// Given an array of positive integers. Find the maximum length of Bitonic subsequence. 
// A subsequence of array is called Bitonic if it is first strictly increasing, then strictly decreasing.
//  

// Example 1:

// Input: nums = [1, 2, 5, 3, 2]
// Output: 5
// Explanation: The sequence {1, 2, 5} is
// increasing and the sequence {3, 2} is 
// decreasing so merging both we will get 
// length 5.


#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int LongestBitonicSequence(vector<int>nums){
        int n = nums.size();
        vector<int> increase(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j]){
                    increase[i] = max(increase[i], 1+increase[j]);
                }
            }
        }
        vector<int> decrease(n,1);
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(nums[i]>nums[j]){
                    decrease[i] = max(decrease[i], 1+decrease[j]);
                }
            }
        }
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi, (increase[i] + decrease[i]-1));
        }
        return maxi;
    }
};