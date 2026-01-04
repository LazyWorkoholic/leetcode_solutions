// Problem: LeetCode 11 - Container With Most Water
// Technique: Two Pointer (Left & Right)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int area = 0;
        int base = height.size()-1;

        while (l < r) {
            area = max(area, min(height[l], height[r]) * base);

            if (height[l] < height[r]) l++;
            else r--;

            base--;
        }
        return area;
    }
};