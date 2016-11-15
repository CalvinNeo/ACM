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
//#define MAXN 105
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T;
//LL up[22][22];
//LL down[22][22];
//
//void print(long long c, int n) {
//	int ans[22];
//	bool vis[22];
//	memset(vis, 0, sizeof vis);
//	memset(ans, 0, sizeof ans);
//	for (int i = 1; i <= n; i++)
//	{
//		// µÚiÎ»
//		int no = 0, kk;
//		// kk
//		for (kk = 1; kk <= n; kk++)
//		{
//			// vis
//			if (!vis[kk]) {
//				no++;
//				if (i == 1) {
//					if (c > up[n][no] + down[n][no]) {
//						c -= (up[n][no] + down[n][no]);
//					}
//					else {
//						break;
//					}
//				}
//				else {
//					if (kk > ans[i - 1] && (i <= 2 || ans[i - 2] > ans[i - 1])) {
//						if (c > down[n - i + 1][no]) {
//							c -= down[n - i + 1][no];
//						}
//						else {
//							break;
//						}
//					}
//					else if (kk < ans[i - 1] && (i <= 2 || ans[i - 2] < ans[i - 1])) {
//						if (c > up[n - i + 1][no]) {
//							c -= up[n - i + 1][no];
//						}
//						else {
//							break;
//						}
//					}
//				}
//			}
//		}
//		vis[kk] = true;
//		ans[i] = kk;
//	}
//	//printf("left %d\n", c);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1) {
//			printf("%d", ans[i]);
//		}
//		else {
//			printf(" %d", ans[i]);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//	scanf("%d", &T);
//	memset(up, 0, sizeof up);
//	memset(down, 0, sizeof down);
//	down[1][1] = up[1][1] = 1;
//	for (int i = 2; i <= 20; i++)
//	{
//		// i¸ö
//		for (int k = 1; k <= i; k++)
//		{
//			for (int j = k; j < i; j++)
//			{
//				up[i][k] += down[i - 1][j];
//			}
//			for (int j = 1; j <= k - 1; j++)
//			{
//				down[i][k] += up[i - 1][j];
//			}
//		}
//	}
//	while (T--) {
//		LL c;
//		int n;
//		scanf("%d%lld", &n, &c);
//		print(c, n);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}