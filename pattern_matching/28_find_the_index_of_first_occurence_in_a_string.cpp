// Problem: LeetCode 28 - Find the Index of the First Occurrence in a String
// Technique: Naive String Matching (Brute Force)
// Time Complexity: O(n * m)
// Space Complexity: O(1)

#include <string>
using namespace std;

// First approach but not good if you completely rely on as it does not explain internal explanation.
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         return haystack.find(needle);
//     }
// };

// Brute Force
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int k = needle.size();

        if (k > n) return -1;

        for (int i = 0; i <= n - k; i++) {
            int j = 0;
            while (j < k && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == k) return i;
        }
        return -1;
    }
};
