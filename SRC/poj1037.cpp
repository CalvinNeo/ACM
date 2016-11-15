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
//void print(int c, int n) {
//	int ans[22];
//	bool vis[22];
//	memset(vis, 0, sizeof vis);
//	memset(ans, 0, sizeof ans);
//	int i = 1;
//	int k = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		// 第i位
//		int k = 0;
//		// kk
//		for (int kk = 1; kk <= n; kk++)
//		{
//			// vis
//			if (!vis[kk]) {
//				k++;
//				// 是k
//				if (up[i][k] + down[i][k] >= c) {
//					ans[i] = k;
//					vis[k] = true;
//					// index n
//					// i == 1
//					if (i == 1) {
//						c -= (up[n][k] + down[n][k]);
//					}
//					else if (k > ans[i - 1] && (i <= 2 || ans[i - 2] > ans[i - 1])) {
//						c -= down[n - i + 1][k];
//					}
//					else if (k < ans[i - 1] && (i <= 2 || ans[i - 2] < ans[i - 1])) {
//						c -= up[n - i + 1][k];
//					}
//					break;
//				}
//				else {
//					c -= (up[n - i + 1][k] + down[n - i + 1][k]);
//				}
//			}
//		}
//	}
//	printf("left %d\n", c);
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
//	while (T--) {
//		int c, n;
//		scanf("%d%d", &n, &c);
//		memset(up, 0, sizeof up);
//		memset(down, 0, sizeof down);
//		down[1][1] = up[1][1] = 1;
//		for (int i = 2; i <= n; i++)
//		{
//			// i个
//			for (int k = 1; k <= i; k++)
//			{ // 以第k个开头
//				//for (int j = k + 1; j <= i; j++)
//				//{
//				//	up[i][k] += down[i - 1][j];
//				//}
//				for (int j = k; j < i; j++)
//				{
//					up[i][k] += down[i - 1][j];
//				}
//				for (int j = 1; j <= k - 1; j++)
//				{
//					down[i][k] += up[i - 1][j];
//				}
//			}
//		}
//		print(c, n);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}