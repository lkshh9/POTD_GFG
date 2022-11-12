// Jumping Numbers
// Given a positive number X. Find the largest Jumping Number which is smaller than or equal to X. 
// Jumping Number: A number is called Jumping Number if all adjacent digits in it differ by only 1. 
// All single-digit numbers are considered as Jumping Numbers. 
// For example 7, 8987 and 4343456 are Jumping numbers but 796, 677 and 89098 are not.

#include <bits/stdc++.h>
using namespace std;

long long jumpingNums(long long x) {
        if(x <= 10) return x;
        
        queue<long long> q;
        
        for(int i = 1; i <= 9; i++) q.push(i);
        
        long long ans = 0;
        while(!q.empty()) {
            long long cur = q.front();
            q.pop();
            
            if(cur > x) continue;
            
            ans = max(ans,cur);
            int n = (int) cur%10;
            
            if(n) {
                long long t = cur*10+(n-1);
                q.push(t);
            }
            
            if(n != 9){
                long long t = cur*10+(n+1);
                q.push(t);
            }
        }
        
        return ans;
    }