Input :  3 9 6 5 1 2 3 8 7 
Output :  51263   // 25  + 51238  = 51263

Input :  1 1 1 5 1 1 8 1 
Output :  5122  // 4  + 5118  = 5122

Explanation: 
 you have to sum up all the integers until input 5 appears. Then combine the inputs starts with 5 and ends with 8.
 At last you have print the sum of combined number and summation of rest numbers.
 
 
 
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, sum = 0, num = 0;
	bool flag = true, check = true;
	while (cin >> a) {
		flag = true;
		if (a == 5 && check) {
			num = num * 10 + a;
			check = false;
			while (cin >> a) {
				num = num * 10 + a;
				if (a == 8) {
					flag = false;
					break;
				}
			}
		}
		if (flag)	sum += a;
	}
	cout << sum + num;
	return 0;
}


//Prithivi Solution 

#include<iostream>
using namespace std;
int main()
{
    int in,s=0,x;
    bool flag=true;
    while((x=getchar())!=10)
    {
        if(x==32) continue;
        if( flag  && x-'0'==5)
        {
            in=5;
            while((x=getchar())-'0'!=8)
            {
                if(x==32) continue;
                in=in*10+x-'0';
            }
            in=in*10+x-'0';
            flag=false;
        }
        else {s+=x-'0';}
    }
    cout<<s+in;
    return 0;
}
