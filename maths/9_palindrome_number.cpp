// Problem: LeetCode 9 - Palindrome Number
// Technique: Math (Reverse Half of Number)
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

#include  <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return (x == rev || x == rev / 10);
    }
};