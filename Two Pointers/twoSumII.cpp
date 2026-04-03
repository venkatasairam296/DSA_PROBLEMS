/*
Problem: Two Sum II - Input Array Is Sorted

Brief problem:
Given a sorted array and a target, return the 1-based indices of two
numbers such that they add up to target. Exactly one valid pair exists.

Approach 1 (Brute Force):
- Try every pair (i, j) with i < j and check if numbers[i] + numbers[j] == target.
- First matching pair is the answer.
- Time: O(n^2)
- Space: O(1)

Approach 2 (Better - Binary Search for each index):
- For each index i, compute need = target - numbers[i].
- Use binary search in the right part [i + 1, n - 1] to find need.
- Since array is sorted, binary search is valid.
- Time: O(n log n)
- Space: O(1)

Approach 3 (Optimal - Two Pointers):
- Keep left at start and right at end.
- sum = numbers[left] + numbers[right]
- If sum == target, return {left + 1, right + 1}.
- If sum < target, move left++ to increase sum.
- If sum > target, move right-- to decrease sum.

Why optimal works:
Because the array is sorted, pointer movement is meaningful:
moving left rightward increases the left value, and moving right leftward
decreases the right value. So each move removes impossible pairs.

Optimal complexity:
- Time: O(n)
- Space: O(1)
*/

#include<vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int left = 0, right = numbers.size() - 1;

		while (left < right) {
			int sum = numbers[left] + numbers[right];

			if (sum == target) {
				return {left + 1, right + 1};
			} else if (sum < target) {
				left++;
			} else {
				right--;
			}
		}

		return {};
	}
};
