/*
------------------------------------------------------------
Problem:
Given an integer array nums, return true if any value appears
at least twice in the array. Otherwise, return false.

Approach: Brute Force

Logic:
- Compare every element with all elements after it.
- If any two elements are equal, a duplicate exists.
- Return true immediately when a duplicate is found.
- If no duplicate is found after checking all pairs, return false.

Example:
Input:
nums = [1, 2, 3, 1]

Step-by-step:
- Compare 1 with 2, 3, and 1.
- A matching value (1) is found.
- Return true.

Output:
true

Time Complexity:
O(n²)

Space Complexity:
O(1)
------------------------------------------------------------
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        // Compare every element with the remaining elements
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Duplicate found
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        // No duplicates exist
        return false;
    }
};