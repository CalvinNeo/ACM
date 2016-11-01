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
//#include <queue>
//#include <string.h>
//#include <numeric>
//
//inline int fastread() {
//	
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//
//#define INF 0x3f3f3f3f
//#define MAXN 100010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int dp[MAXN][13];
//
////template <typename T, typename... Args>
////int maxn(T value, Args... args) {
////	return max(value, maxn(args...));
////}
////template <typename T>
////int maxn(T value) {
////	return value;
////}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int n;
//	while (~SC1(n) && n != 0) {
//		int x, T, maxt = -INF;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++)
//		{
//			SC2(x, T);
//			dp[T][x]++;
//			maxt = max(T, maxt);
//		}
//		for (int t = maxt ; t > 0; t--)
//		{
//			dp[t - 1][0] += max(dp[t ][1], dp[t ][0]);
//			for (int i = 1; i <= 9; i++)
//			{
//				dp[t - 1][i] += max(dp[t ][i - 1], max( dp[t][i], dp[t ][i + 1]));
//			}
//			dp[t - 1][10] += max(dp[t ][10], dp[t ][9]);
//		}
//		int ans;
//		ans = dp[0][5];
//		printf("%d\n", ans);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
