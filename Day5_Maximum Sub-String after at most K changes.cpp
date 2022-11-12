// Maximum Sub-String after at most K changes

// We have a string s of length n, which contains only UPPERCASE characters and we have a number k (always less than n). 
// We can make at most k changes in our string. In one change, you can replace any s[i] (0<= i < n) with any uppercase character (from 'A' to 'Z'). 
// After k changes, find the maximum possible length of the sub-string which have all same characters.

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int characterReplacement(string s, int k){
		    int mx = 1;
		    for(char ch = 'A' ; ch<='Z' ; ch++){
		        int ct = 0;
		        int left = 0 , right = 0;
		        while(right < s.size()){
		            if(s[right] == ch){
		                mx = max(mx , right - left + 1);
		                right++;
		            }
		            else{
		                if(ct < k){
		                    ct++;
		                    mx = max(mx , right - left + 1);
		                    right++;
		                }
		                else{
		                    while(left < s.size() && s[left] == ch){
		                        left++;
		                    }
		                    left++;
		                    ct--;
		                }
		            }
		        }

		    }
		    return mx;
		}
};