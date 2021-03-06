/*
Binary Number with Alternating Bits

Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.



Example 1:

Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101

Example 2:

Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.

Example 3:

Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.


Constraints:

1 <= n <= 231 - 1
*/

class Solution {
public:
	bool hasAlternatingBits(int n) {
		vector<int>bits;
		while (n > 0) {
			bits.push_back(n % 2);
			n /= 2;
		}
		for (int i = 0; i < bits.size() - 1; i++) {
			if (bits[i] == bits[i + 1])  return false;
		}
		return true;
	}
};