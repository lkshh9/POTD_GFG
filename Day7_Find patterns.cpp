// Find patterns

// Given two strings S and W. Find the number of times W appears as a subsequence of 
// string S where every character of string S can be included in forming at most one subsequence.
 

// Example 1:

// Input: 
//  S = "abcdrtbwerrcokokokd" 
//  W = "bcd" 
// Output: 
//  2
// Explanation: 
// The two subsequences of string W are
// { S1 , S2 , S3 } and { S6 , S11 , S18 }
// (Assuming 0- based indexing).

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        int k;
        int ans = 0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]==W[0])
            {
                k=0;
                for(int j=i;j<S.length() && k<W.length();j++)
                {
                    // after making use of subsequence we mark the matching element with any spacial character 
                    if(S[j]==W[k])
                    {
                        S[j]='#';
                        k++;
                    }
                }
                if(k==W.length())
                ans++;
            }
        }
        return ans;
    }
};