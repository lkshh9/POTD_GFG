// Unique partitions

// Given a positive integer n, generate all possible unique ways to represent n as sum of positive integers.

// Note: The generated output is printed without partitions. Each partition must be in decreasing order.
// Printing of all the partitions is done in reverse sorted order. 

// Example 1:

// Input: n = 3
// Output: 3 2 1 1 1 1
// Explanation: For n = 3, 
// {3}, {2, 1} and {1, 1, 1}.


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void helper(vector<vector<int>>&ans,vector<int>&curr,int i,int n){
            if(n==0){
                ans.push_back(curr);
                return;
            }
            if(i<1){
                return;
            }
            if(i<=n){
                curr.push_back(i);
                helper(ans,curr,i,n-i);
                curr.pop_back();
                helper(ans,curr,i-1,n);
            }
            else{
                helper(ans,curr,i-1,n);
            }
        }
        
        vector<vector<int>> UniquePartitions(int n) {
            vector<vector<int>>ans;
            vector<int>curr;
            helper(ans,curr,n,n);
            return ans;
        }
};