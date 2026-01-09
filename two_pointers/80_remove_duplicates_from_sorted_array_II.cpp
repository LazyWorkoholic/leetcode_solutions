// Problem: LeetCode 80 - Remove Duplicates from Sorted Array II
// Technique: Two Pointer (Slow–Fast Pointer)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2)
            return nums.size();
        
        int j = 2;
        for(int i = 2; i <= nums.size()-1; i++){
            if (nums[i] != nums[j-1] || nums[i] != nums[j-2]){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
        return j;
    }
};