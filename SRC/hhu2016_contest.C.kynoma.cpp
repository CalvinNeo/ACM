//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//#include <map>
//#include <vector>
//#include <queue>
//using namespace std;
//#define INF 0x3f3f3f3f
//const int maxn = 250;
//const double killme = 1e7;
//const double eps = 1e-8;
//double min_loop;
//double mp[maxn][maxn];
//double dis[maxn][maxn];
//pair<double, double > save[maxn];
//vector<int> final[510];
//
//int n, m;
//void init() {
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			if (i == j) {
//				mp[i][j] = 0.0f;
//				dis[i][j] = 0.0f;
//			}
//			else {
//				mp[i][j] = INF;
//				dis[i][j] = INF;
//			}
//		}
//	}
//	for (i = 1; i <= m; i++) {
//		final[i].clear();
//	}
//}
//bool online(double x, double y, double x1, double y1, double x2, double y2) {
//	double min_x = min(x1, x2), max_x = max(x1, x2);
//	double min_y = min(y1, y2), max_y = max(y1, y2);
//	if (min_x>x || x>max_x || y<min_y || y>max_y) {
//		return false;
//	}
//	if (abs((x - min_x)*(max_y - min_y) - (max_x - min_x)*(y - min_y))<eps) {
//		return true;
//	}
//	return false;
//}
//bool floyd() {
//	min_loop = INF;
//	int i, j, k;
//	for (k = 1; k <= n; k++) {
//		for (i = 1; i<k; i++) {
//			for (j = i + 1; j<k; j++) {
//				if (min_loop>mp[i][j] + dis[i][k] + dis[k][j]) {
//					min_loop = mp[i][j] + dis[i][k] + dis[k][j];
//				}
//			}
//		}
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= n; j++) {
//				mp[i][j] = min(mp[i][j], mp[i][k] + mp[k][j]);
//			}
//		}
//	}
//	if (min_loop>killme) {
//		return  false;
//	}
//	else {
//		return true;
//	}
//
//}
//bool compare(int a, int b) {
//	if (abs(save[a].first - save[b].second) == 0) {
//		return save[a].second<save[b].second;
//	}
//	return save[a].first<save[b].first;
//}
//int main() {
//	int i, j;
//	printf("%d", online(18, 97, 99, 67, 18, 97));
//	while (~scanf("%d%d", &n, &m)) {
//		double a, b;
//		for (i = 1; i <= n; i++) {
//			scanf("%lf%lf", &a, &b);
//			save[i] = make_pair(a, b);
//		}
//		init();
//		int u, v;
//		for (i = 1; i <= m; i++) {
//			scanf("%d%d", &u, &v);
//			for (j = 1; j <= n; j++) {
//				if (online(save[j].first, save[j].second, save[u].first, save[u].second, save[v].first, save[v].second)) {
//					final[i].push_back(j);
//				}
//			}
//			//sort(final[i].begin(), final[i].end(), compare);
//			for (j = 0; j < final[i].size() - 1; j++) {
//				u = final[i][j];
//				v = final[i][j + 1];
//				mp[u][v] = min(mp[u][v], sqrt(pow(save[u].first - save[v].first, 2) + pow(save[u].second - save[v].second, 2)));
//				mp[v][u] = mp[u][v];
//				dis[u][v] = mp[u][v];
//				dis[v][u] = mp[u][v];
//			}
//
//		}
//		if (floyd()) {
//			printf("%.2lf\n", min_loop);
//		}
//		else {
//			printf("impossible\n");
//		}
//	}
//	return 0;
//}