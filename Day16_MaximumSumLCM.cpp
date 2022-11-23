// Maximum Sum LCM

// Given a positive number n. 
// You need to write a program to find the maximum sum of distinct numbers such that the LCM of all these numbers is equal to n.

// Example 1:

// Input: n = 2
// Output: 3 
// Explanation: The distinct numbers you can have are 
// just 1 and 2 and their sum is equal to 3.

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    long long int maxSumLCM(int n){
        long long ans = 0;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                if(n/i == i){
                    ans = ans +i;
                }else {
                    ans = ans + n/i + i;
                }
            }
        }
        return ans;
    }
};