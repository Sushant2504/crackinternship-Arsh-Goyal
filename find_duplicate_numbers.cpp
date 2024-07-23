#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++){
             if(nums[i]!=i+1) {
                ans=nums[i];
                break;
             }
        }

        return ans;

        
    }
};