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
//
//#define INF 0x3f3f3f3f
//#define MOD 100000007
//#define MAXN 110
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int n, m;
//int mp[MAXN][MAXN], dis[MAXN][MAXN];
//
//int main() {
//	while (scanf("%d%d", &n, &m) != EOF) {
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (i != j) {
//					dis[i][j] = mp[i][j] = INF;
//				}
//				else {
//					dis[i][j] = mp[i][j] = 0;
//				}
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			int a, b, c;
//			scanf("%d%d%d", &a, &b, &c);
//			if (mp[a][b] > c)
//			{
//				dis[a][b] = mp[a][b] = c;
//				dis[b][a] = mp[b][a] = c;
//			}
//		}
//		int minc = INF;
//		for (int k = 1; k <= n; k++)
//		{
//			for (int i = 1; i < k; i++)
//			{
//				for (int j = 1; j < i; j++)
//				{
//					minc = min(minc, dis[i][j] + mp[j][k] + mp[k][i]);
//				}
//			}
//			for (int i = 1; i < n; i++)
//			{
//				for (int j = 1; j < i; j++) {
//					int temp = mp[i][k] + mp[k][j];
//					if (temp < mp[i][j]) {
//						mp[i][j] = mp[j][i] = temp;
//						dis[i][j] = dis[j][i] = temp;
//					}
//				}
//			}
//		}
//		if (minc != INF) {
//			printf("%d\n", minc);
//		}
//		else {
//			puts("It's impossible.");
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
