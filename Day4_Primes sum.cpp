// Primes sum
// Given a number N. Find if it can be expressed as sum of two prime numbers.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPrime(int n)
    {
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    
    string isSumOfTwo(int N){
        for(int i=2;i<N;i++)
        {
            if(isPrime(i) && isPrime(N-i))
            {
                return "Yes";
            }
        }
        return "No";
    }
};