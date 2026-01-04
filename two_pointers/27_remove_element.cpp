// Problem: LeetCode 27 - Remove Element
// Technique: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                swap(nums[i], nums[k]);
                k++;
            }else if(nums[i] == val){
                continue;
            }
        }
        return k;
    }
};