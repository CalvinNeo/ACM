//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <functional>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//#include <numeric>
//
//#define INF 0x3f3f3f3f
//#define MAXN 505
//using namespace std;
//#define LL long long
//
//LL exgcd(LL a, LL b, LL & x, LL & y ) {
//	LL d;
//	if (b == 0) {
//		x = 1; y = 0;
//		return a;
//	}
//	else {
//		int ans = exgcd(b, a % b, y, x);
//		y -= x * (a / b);
//		return ans;
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int T;
//	cin >> T;
//	LL n, B;
//	while (T--) {
//		cin >> n >> B;
//		/*
//		 �ⷽ�� ax === b(mod n)�൱�ڽⷽ�� ax + ny == b
//		 ����������, ���Ϸ��̵� gcd(a, n) | b
//		*/
//		LL x, y;
//		exgcd(B, 9973, x, y);
//		x *= n;
//		x = (x % 9973 + 9973) % 9973;
//		cout << x << endl;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
