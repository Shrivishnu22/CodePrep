/*
Equal Mex Splitting

Chef has an array A of length N. Chef wants to select some disjoint, non-empty subarrays from A such that:

The mex of each of the selected subarray is the same.
Note that the selected subarrays need not cover all the elements of the array.

For e.g. if A=[2,0,1,6,2,1,3,0,7], then one way in which Chef can select subarrays is as following: [0,1],[1,3,0] (Here mex of both of them is 2).

Chef wants to select the maximum number of disjoint, non-empty subarrays that satisfy the above condition. Can you help him to do so?

Note: An array X is called a subarray of an array Y if X can be obtained from Y by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end. Also, mex of a subarray is the smallest non-negative number that does not occur in that subarray.

Input Format

The first line will contain T - the number of test cases. Then the test cases follow.
The first line of each test case contains a single integer N - the length of the array A.
The second line of each test case contains N space-separated integers - A1,A2,…,AN denoting the array A.

Output Format

For each test case, output the maximum number of disjoint subarrays which Chef can select such that mex of each subarray is the same.

Constraints

1≤T≤1000
1≤N≤105
0≤Ai≤N
It is guaranteed that the sum of N does not exceed 5⋅105

Sample Input 1
2
4
0 1 1 0
6
0 0 3 1 2 0

Sample Output 1
2
3

Explanation
Test case-1: Chef can select the following subarrays: [0,1], [1,0]. Here mex([0,1])=mex([1,0])=2. Therefore the answer is 2.

Test case-2: Chef can select the following subarrays: [0], [0,3], [2,0]. Here mex([0])=mex([0,3])=mex([2,0])=1. Therefore the answer is 3.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m = 0;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 0) {
				m++;
			}
		}
		cout << max(m, n - m) << endl;
	}
	return 0;
}