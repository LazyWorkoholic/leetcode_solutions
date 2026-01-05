// Problem: LeetCode 167 - Two Sum II (Input Array Is Sorted)
// Technique: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = numbers.size() - 1;
        vector<int> array(2);

        while(index1 < index2){
            if(numbers[index1] + numbers[index2] == target){
                array[0] = index1 + 1;
                array[1] = index2 + 1;
                return array;
            }else if (numbers[index1] + numbers[index2] > target){
                index2--;
            }else if(numbers[index1] + numbers[index2] < target){
                index1++;
            }
        }

        return array;
    }
};
