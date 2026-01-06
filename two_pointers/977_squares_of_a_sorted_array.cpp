// Problem: LeetCode 977 - Squares of a Sorted Array
// Technique: Two Pointer (Compare Absolute Values)
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int n = nums.size();
        vector<int> arr(n);
        for(int i = r; i >= 0; i--){
            if (abs(nums[l]) < abs(nums[r])){
                arr[i] = nums[r] * nums[r];
                r--;
            }else{
                arr[i] = nums[l] * nums[l];
                l++;
            }
        }
        return arr;
    }
};