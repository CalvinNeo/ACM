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
//#define MAXN 1010
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T;
//char s1[MAXN];
//char s2[MAXN];
//int len1, len2;
//int dp[MAXN][MAXN];
//
//int main() {
//	while (cin >> s1 >> s2) {
//		len1 = strlen(s1);
//		len2 = strlen(s2);
//		memset(dp, 0, sizeof dp);
//		for (int i = 0; i < len1; i++)
//		{
//			for (int j = 0; j < len2; j++)
//			{
//				if (s1[i] == s2[j]) {
//					dp[i + 1][j + 1] = dp[i][j] + 1;
//				}
//				else {
//					dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
//				}
//			}
//		} 
//		printf("%d\n", dp[len1 ][len2 ]);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}