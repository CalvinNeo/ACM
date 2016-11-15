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
//int R, C;
//
//struct Point {
//	int x, y, h;
//	Point(int x, int y, int h) : x(x), y(y), h(h) {
//
//	}
//	Point(int x, int y) : x(x), y(y), h(INF) {
//
//	}
//	bool operator<(const Point & m) {
//		return h < m.h;
//	}
//};
//
//vector<Point> mp;
//int ma[MAXN][MAXN];
//int dp[MAXN][MAXN];
//
//const int dix[] = { 0, 0, 1, -1 };
//const int diy[] = { 1, -1, 0, 0 };
//
//int main() {
//	while (scanf("%d%d", &R, &C) != EOF) {
//		mp.clear();
//		memset(ma, -1, sizeof ma);
//		for (int i = 1; i <= R; i++)
//		{
//			for (int j = 1; j <= C; j++)
//			{
//				int h;
//				scanf("%d", &h);
//				ma[i][j] = h;
//				dp[i][j] = 1;
//				mp.push_back(Point(i, j, h));
//			}
//		}
//		sort(mp.begin(), mp.end());
//		for (int i = 0; i < mp.size(); i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				int dx = mp[i].x + dix[j];
//				int dy = mp[i].y + diy[j];
//				if (mp[i].h < ma[dx][dy]) {
//					dp[dx][dy] = max(dp[dx][dy], dp[mp[i].x][mp[i].y] + 1);
//				}
//			}
//		}
//		int m = -1;
//		for (int i = 1; i <= R; i++)
//		{
//			for (int j = 1; j <= C; j++)
//			{
//				m = max(dp[i][j], m);
//			}
//		}
//		printf("%d\n", m);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}