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
//#include <bitset>
//using namespace std;
//
//const int N = 1e4 + 7, P = 1e8 + 7;
//
//char s[N];
//int num[N], dp[N], t, ans, n;
//
//int main()
//{
//	scanf("%d", &t);
//	while (t--)
//	{
//		scanf("%s", s + 1), ans = 0;
//		n = strlen(s + 1);
//		for (int i = 1; i <= n; i++) {
//			num[i] = s[i] - '0';
//		}
//		for (int i = 0; i <= num[1]; i++)
//		{
//			// 某一列总共有几个雷，注意雷只在1/3行
//			dp[1] = i;
//			if (i > 2) {
//				break;
//			}
//			int j;
//			for (j = 2; j <= n; j++)
//			{
//				// num[j]的选择数
//				int now = num[j - 1] - dp[j - 1] - dp[j - 2];
//				if (now > 2 || now < 0) {
//					// 非法情况
//					break;
//				}
//				// 此时后面所有的情况都可以确定了
//				dp[j] = now;
//			}
//			if (j <= n || dp[n - 1] + dp[n] != num[n]) {
//				// 检查n是否合法
//				continue;
//			}
//			int an = 1;
//			for (int j = 1; j <= n; j++) {
//				// 对于每一列，如果只有一个雷，那么可以放在1或者3
//				if (dp[j] == 1) {
//					an *= 2;
//					an %= P;
//				}
//			}
//			ans += an;
//			ans %= P;
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}