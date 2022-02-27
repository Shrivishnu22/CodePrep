/*
Height Checker

A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].



Example 1:

Input: heights = [1,1,4,2,1,3]
Output: 3

Explanation:
heights:  [1,1,4,2,1,3]
expected: [1,1,1,2,3,4]
Indices 2, 4, and 5 do not match.

Example 2:

Input: heights = [5,1,2,3,4]
Output: 5

Explanation:
heights:  [5,1,2,3,4]
expected: [1,2,3,4,5]
All indices do not match.

Example 3:

Input: heights = [1,2,3,4,5]
Output: 0

Explanation:
heights:  [1,2,3,4,5]
expected: [1,2,3,4,5]
All indices match.


Constraints:

1 <= heights.length <= 100
1 <= heights[i] <= 100
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	vector<int>v = {1, 1, 4, 2, 1, 3};
	vector<int>w = v;
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] != w[i])
			cnt++;
	}
	cout << cnt << endl;

}

//O(N) Approach

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        auto copy = heights;
        sort(copy.begin(), copy.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++)
        {
            if(heights[i] != copy[i])
                count++;
        }
        return count;
    }
};
