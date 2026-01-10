// Problem: LeetCode 905 - Sort Array By Parity
// Technique: Two Pointer (Slow–Fast / In-place Partition)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2==0){
                swap(nums[i], nums[k]);
                k++;
           }
        }
        return nums;
    }
};


// Problem: LeetCode 905 - Sort Array By Parity
// Technique: Two Pointer (Partition by Parity)
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            if (nums[l] % 2 == 0) {
                l++;
            } 
            else if (nums[r] % 2 == 1) {
                r--;
            } 
            else {
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
        }
        return nums;
    }
};
*/