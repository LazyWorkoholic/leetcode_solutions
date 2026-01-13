// Problem: LeetCode 922 - Sort Array By Parity II
// Technique: Two Pointer (Index-based Parity Placement)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evenPtr = 0;
        int oddPtr = 1;
        while(true){
            while(evenPtr < nums.size() && nums[evenPtr] % 2 == 0){
                evenPtr += 2;
            }

            while(oddPtr < nums.size() && nums[oddPtr] % 2 != 0){
                oddPtr += 2;
            }
            if(oddPtr < nums.size() && evenPtr < nums.size()){
                swap(nums[oddPtr], nums[evenPtr]);
                evenPtr += 2;
                oddPtr += 2;
                continue;
            }
            break;
        }
        return nums;
    }
};
