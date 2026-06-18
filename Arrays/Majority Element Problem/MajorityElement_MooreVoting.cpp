/*
Problem: Majority Element

Approach:
- Moore's Voting Algorithm
- Maintain a candidate element and a count.
- If count becomes 0, choose the current element as the new candidate.
- If the current element matches the candidate, increment count.
- Otherwise, decrement count.
- Since the majority element appears more than n/2 times, it will remain as the final candidate.

Example:
Input: [2,2,1,1,1,2,2]

Element    Candidate    Count
2             2           1
2             2           2
1             2           1
1             2           0
1             1           1
2             1           0
2             2           1

Final Candidate = 2
Answer = 2

Why it Works:
- Every occurrence of a non-majority element cancels out one occurrence
  of the majority element.
- Since the majority element occurs more than n/2 times, it cannot be
  completely cancelled and will remain as the final candidate.

Time Complexity: O(n)
- Single traversal of the array.

Space Complexity: O(1)
- Only two variables are used.
*/

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0, ans = -1;

        for(int i = 0; i < n; i++) {
            if(cnt == 0) {
                ans = arr[i];
            }

            if(ans == arr[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }

        return ans;
    }
};