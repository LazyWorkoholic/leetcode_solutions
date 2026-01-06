// Problem: LeetCode 75 - Sort Colors
// Technique: Two Pointer (Dutch National Flag Algorithm)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0;
        int r = nums.size() - 1;
        while(m <= r){
            if(nums[m] == 0){
                swap(nums[l], nums[m]);
                l++;
                m++;
            }else if(nums[m] == 1){
                m++;
            }else{
                swap(nums[m], nums[r]);
                r--;
            }
        }
    }
};