// Two numbers with odd occurrences
// Given an unsorted array, Arr[] of size N and that contains even number of occurrences for all numbers except two numbers. 
// Find the two numbers in decreasing order which has odd occurrences.

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        int x=0;
        for(int i=0;i<N;i++){
            x=x^Arr[i];
        }
        
        int set = x & ~(x-1);
        int f=0;
        int s=0;
        
        for(int i=0;i<N;i++){
            if(set & Arr[i]){
                f=f^Arr[i];
            }else{
                s=s^Arr[i];
            }
        }
        if(f>=s)
            return {f,s};
        else
            return {s,f};
        
        
    }
};