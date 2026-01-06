// Problem: LeetCode 344 - Reverse String
// Technique: Two Pointer (Left & Right Swap)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;
        while(l < r){
            swap(s[l], s[r]);
            
            l++;
            r--;
        }
    }
};

// Bitwise-operator swapping
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int l = 0;
//         int r = s.size() - 1;
//         while(l < r){
//             s[l] = s[l] ^ s[r];
//             s[r] = s[l] ^ s[r];
//             s[l] = s[l] ^ s[r];

//             l++;
//             r--;
//         }
//     }
// };