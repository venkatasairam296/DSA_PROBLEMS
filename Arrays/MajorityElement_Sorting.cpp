/*
Problem: Majority Element

Approach:
- Sorting
- First, sort the array so that equal elements become adjacent.
- Traverse the sorted array and count the frequency of consecutive elements.
- If the frequency of an element becomes greater than n/2, return it as the majority element.

Example:
Input: [2,2,1,1,1,2,2]

After Sorting:
[1,1,1,2,2,2,2]

Frequencies:
1 -> 3
2 -> 4

Array size = 7

Since frequency of 2 (4) > 7/2 (3),
Answer = 2

Time Complexity: O(n log n)
- Sorting takes O(n log n).
- Traversing the array takes O(n).

Space Complexity: O(1)
- Ignoring the space used internally by the sorting algorithm.
*/

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();

        // Sort the array to group identical elements together
        sort(arr.begin(), arr.end());

        int freq = 1;
        int ans = arr[0];

        // Count frequency of consecutive elements
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                freq++;
            } else {
                freq = 1;
                ans = arr[i];
            }

            // Majority element appears more than n/2 times
            if (freq > (n / 2)) {
                return ans;
            }
        }

        return ans;
    }
};

// Interview Note

// For this problem, there is an even simpler sorting observation:

// After sorting, the majority element must occupy the middle position because it appears more than n/2 times.

// sort(arr.begin(), arr.end());
// return arr[n / 2];