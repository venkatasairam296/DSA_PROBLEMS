/*
Problem: Two Sum II - Input Array Is Sorted

Brief idea:
Given a sorted array, find two numbers whose sum equals the target.
Because the array is already sorted, we can use two pointers instead of
checking every pair.

Logic:
1. Start one pointer at the beginning and the other at the end.
2. Compute the sum of the two pointed values.
3. If the sum matches the target, return the 1-based indices.
4. If the sum is smaller than the target, move the left pointer right
   to increase the sum.
5. If the sum is larger than the target, move the right pointer left
   to decrease the sum.

Why this works:
The array is sorted, so moving the left pointer right increases the sum
and moving the right pointer left decreases the sum. This lets us search
efficiently in linear time.

Time complexity: O(n)
Space complexity: O(1)
*/

#include <vector>
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
