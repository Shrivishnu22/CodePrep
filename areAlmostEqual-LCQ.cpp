/*
Check if One String Swap Can Make Strings Equal

You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.



Example 1:

Input: s1 = "bank", s2 = "kanb"
Output: true
Explanation: For example, swap the first character with the last character of s2 to make "bank".
Example 2:

Input: s1 = "attack", s2 = "defend"
Output: false
Explanation: It is impossible to make them equal with one string swap.
Example 3:

Input: s1 = "kelb", s2 = "kelb"
Output: true
Explanation: The two strings are already equal, so no string swap operation is required.


Constraints:

1 <= s1.length, s2.length <= 100
s1.length == s2.length
s1 and s2 consist of only lowercase English letters.
*/

class Solution {
public:
	bool areAlmostEqual(string s1, string s2) {
		int n1 = s1.size(), n2 = s2.size(), count = 0;
		bool flag = true;
		if (n1 != n2)
			return false;
		int v[256] = {0};
		for (int i = 0; i < n1; i++)
		{
			v[s1[i]]++;
			v[s2[i]]--;
		}
		for (auto element : v) {
			if (element) {
				flag = false;
				break;
			}
		}
		if (flag == false) return false;
		for (int i = 0; i < n1; i++) {
			if (s1[i] != s2[i])
				count++;
		}
		return count <= 2;
	}
};