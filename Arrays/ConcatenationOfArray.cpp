/*
Problem: Concatenation of Array

Approach:
- Create a new array of size 2 * n.
- Copy each element of the original array into the first half.
- Copy the same element again into the second half at index (n + i).
- Return the newly formed concatenated array.

Example:
Input: [1,2,1]

First Half:
[1,2,1]

Second Half:
[1,2,1]

Output:
[1,2,1,1,2,1]

Time Complexity: O(n)
- Traverse the array once.

Space Complexity: O(n)
- A new array of size 2 * n is created.
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        // Create result array of size 2 * n
        vector<int> ans(2 * n, 0);

        // Copy elements into both halves
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[n + i] = nums[i];
        }

        return ans;
    }
};