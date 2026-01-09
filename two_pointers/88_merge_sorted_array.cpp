// Problem: LeetCode 88 - Merge Sorted Array
// Technique: Two Pointer (Merge from Back)
// Time Complexity: O(m + n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mid = m - 1;
        int high = nums2.size() - 1;
        for(int i = nums1.size() - 1; high >= 0; i--){
            if(mid >= 0){
                if(nums1[mid] > nums2[high]){
                    nums1[i] = nums1[mid];
                    mid--;
                }else{
                    nums1[i] = nums2[high];
                    high--;
            }
            }else{
                nums1[i] = nums2[high];
                high--;
            }
        }
    }
};