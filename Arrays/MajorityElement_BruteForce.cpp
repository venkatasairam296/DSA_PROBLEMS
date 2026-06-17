/*
Problem: Majority Element

Approach:
- Brute Force
- For every element, count its frequency in the entire array.
- If the frequency becomes greater than n/2, that element is the majority element.

Example:
Input: [2,2,1,1,1,2,2]

Frequency of 2 = 4
Array size = 7

Since 4 > 7/2,
Answer = 2

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int res = 0;
        int cnt = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            cnt = 0;

            for (int j = 0; j < n; j++) {
                if (arr[j] == arr[i]) {
                    cnt++;
                }
            }

            if (cnt > n / 2) {
                res = arr[i];
                break;
            }
        }

        return res;
    }
};