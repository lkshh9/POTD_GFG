// Longest Perfect Piece

// Given an array arr[] of N Numbers. 
// A Perfect Piece is defined as a subarray such that the difference between the minimum and the maximum value in that range is at most 1. 
// Find the Maximal Length Perfect Piece.

 

// Example 1:

// Input:
// N = 4
// arr[] = {8, 8, 8, 8}
// Output:
// 4
// Explanation:
// The longest subarray is [1, 4]
// where maximum=8 and minimum = 8 and
// difference is 0, which is less than 1.
// Its length is 4.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestPerfectPiece(int a[], int n) {
        int lo=0, hi=0, ans=0;
        map<int, int> mp;
        while(hi<n) {
            mp[a[hi]]++;
            while((--mp.end())->first - mp.begin()->first > 1) {
                mp[a[lo]]--;
                if(mp[a[lo]]==0) mp.erase(a[lo]);
                lo++;
            }
            ans=max(ans, hi-lo+1);
            hi++;
        }
        return ans;
    }
};