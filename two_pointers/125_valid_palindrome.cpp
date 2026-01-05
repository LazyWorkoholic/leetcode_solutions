// Problem: LeetCode 125 - Valid Palindrome
// Technique: Two Pointer (Ignore Non-Alphanumeric)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <cctype> //#include <locale> can use this but have to set std::locale loc("en_US.UTF-8"); and pass loc as parameter along with character.
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;

        while(l < r){

            while(l < r && !isalnum(s[l])) l++;
            while(l < r && !isalnum(s[r])) r--;

            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};