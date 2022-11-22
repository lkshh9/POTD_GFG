// Magic Triplets

// Given an array of size n, a triplet (a[i], a[j], a[k]) is called a Magic Triplet if a[i] < a[j] < a[k] and i < j < k.  
// Count the number of magic triplets in a given array.
 

// Example 1:

// Input: arr = [3, 2, 1]
// Output: 0
// Explanation: There is no magic triplet.


#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countTriplets(vector<int>nums){
        int small =0;
        int large = 0;
        int ans = 0;
        for(int i=1;i<nums.size()-1;i++){
            small=0,large=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]) small++;
            }
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]) large++;
            }
            ans += (small*large);
        }
        return ans;
    }
};