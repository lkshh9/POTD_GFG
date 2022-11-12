// Minimum sum partition
// Given an array arr of size n containing non-negative integers, 
// the task is to divide it into two sets S1 and S2 such that the 
// absolute difference between their sums is minimum and find the minimum difference

#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int n, int ind, int TotalSum, int sum, vector<vector<int>>& dp){

    if(ind >= n) return abs(TotalSum - 2 * sum);

    if(dp[ind][sum] != -1) return dp[ind][sum];

    int take = f(arr, n, ind + 1, TotalSum, sum  + arr[ind], dp);

    int nottake = f(arr, n, ind + 1, TotalSum, sum, dp);

    return dp[ind][sum] = min(take,nottake);

}
