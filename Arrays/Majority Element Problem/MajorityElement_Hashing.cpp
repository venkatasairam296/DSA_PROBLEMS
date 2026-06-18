/*
Problem: Majority Element

Approach:
- Hashing (Frequency Count)
- Store the frequency of each element in an unordered_map.
- Traverse the map and find the element whose frequency is greater than n/2.
- That element is the majority element.

Example:
Input: [2,2,1,1,1,2,2]

Frequency Map:
2 -> 4
1 -> 3

Array size = 7

Since frequency of 2 (4) > 7/2 (3),
Answer = 2

Time Complexity: O(n)
- One traversal to build the frequency map.
- One traversal of the map to find the majority element.

Space Complexity: O(n)
- Extra space is used for the hash map.
*/

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int res = 0;
        int n = arr.size();

        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        // Find element with frequency greater than n/2
        for (auto& it : freq) {
            if (it.second > (n / 2)) {
                res = it.first;
                break;
            }
        }

        return res;
    }
};