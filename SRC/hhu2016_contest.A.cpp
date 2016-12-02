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
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAXN 3500
//#define MAXM 13000
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//
//int T;
//int n, m;
//
//int a[MAXN], b[MAXN];
//int dp[MAXM];
//
//int main() {
//	while (scanf("%d%d", &n, &m) != EOF) {
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d%d", &a[i], &b[i]);
//		}
//		memset(dp, 0, sizeof dp);
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = m; j >= 0; j--)
//			{
//				if (j - b[i] < 0) {
//					dp[j] = dp[j];
//				}
//				else {
//					dp[j] = max(dp[j], dp[j - b[i]] + a[i]);
//				}
//			}
//		}
//		printf("%d\n", dp[m]);
//	}
//#ifdef __ACM
//	// system("pause");
//#endif
//}