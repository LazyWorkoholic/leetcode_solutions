// Problem: LeetCode 345 - Reverse Vowels of a String
// Technique: Two Pointer (Selective Swap using Vowel Check)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

bool isAlphaVowel(char a){
    unsigned char c = static_cast<unsigned char> (a);
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size()-1;           
        
        while(l < r){
            while(l < r && !isAlphaVowel(s[l])) l++;
            while(l < r && !isAlphaVowel(s[r])) r--;

            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }
};