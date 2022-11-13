// Fill up buckets
// Given n buckets and infinite number of balls. 
// The maximum capacity of each bucket is given in an array capacity[]. 
// Find the number of ways to fill the buckets with balls such that each 
// bucket has atleast 1 ball and all the buckets have distinct number of balls in them.
// Note: Since the answer may be very large, calculate the answer modulo 10^9+7.

// Example 1:

// Input: 
// n = 1
// capacity = [6]
// Output: 6
// Explanation: Since there is only one 
// bucket. It may hold any number of balls 
// ranging from 1 to 6.


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int totalWays(int n, vector<int>capacity){
        sort(capacity.begin(),capacity.end());
        long mod=1000000007;
        long ans=1;
        for(int i=0;i<n;i++){
            ans = (ans * (capacity[i]-i))%mod;
        }
        return ans;
    }
};