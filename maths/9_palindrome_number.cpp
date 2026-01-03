// 9_palindrome_number.cpp
// LeetCode Problem: 9. Palindrome Number
#include  <iostream>

// Half number reverse method...
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