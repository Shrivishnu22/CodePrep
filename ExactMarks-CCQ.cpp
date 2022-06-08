/*
Exact Marks

Chef attempted an exam consisting of N objective questions. The marking scheme of the exam is:

+3 marks for a correct answer.
−1 marks for an incorrect answer.
0 marks for an unattempted question.
Find whether it is possible for Chef to score exactly X marks.

If it is possible, print 3 integers A, B, and C denoting the number of correct answers, incorrect answers and unattempted questions respectively.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers N,X.

Output Format
For each test case, print YES if it is possible to score exactly X marks, otherwise print NO.

If the answer is YES, print 3 integers A, B and C in the next line such that:

0≤A,B,C≤N
A+B+C=N
Chef's total score is exactly X.
In case of multiple answers, every valid tuple is accepted.

You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes and YES will all be treated as identical).

Constraints
1≤T≤1000
1≤N≤108
0≤X≤3⋅N

Sample Input 1
3
10 30
9 25
8 0

Sample Output 1
YES
10 0 0
NO
YES
1 3 4

Explanation

Test Case 1: A possible way of scoring 30 marks in an exam with 10 questions is: all the 10 answers are correct. This way the score is 10⋅3=30. Thus, the values of A,B, and C are 10,0, and 0 respectively.

Test Case 2: There is no possible way to score exactly 25 marks in an exam with 9 questions.

Test Case 3: A possible way of scoring 0 marks in an exam with 8 questions is: 1 answer is correct, 3 answers are wrong and 4 questions are unattempted. This way the score is 1⋅3+3⋅(−1)+4⋅0=0. Thus, the values of A,B, and C are 1,3, and 4 respectively.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x, a = 0, w = 0;
		cin >> n >> x;
		if (x % 3 == 0)
			a = a + (x / 3);
		else if (x % 3 == 1) {
			a = a + (x / 3) + 1;
			w = w + 2;
		}
		else if (x % 3 == 2) {
			a = a + (x / 3) + 1;
			w = w + 1;
		}
		if (a + w <= n) {
			cout << "YES" << endl;
			cout << a << " " << w << " " << n - a - w << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}