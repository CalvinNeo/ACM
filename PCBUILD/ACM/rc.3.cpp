//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <string>
//#include <cstring>
//#include <queue>
//using namespace std;
//#define MAXN 30010
//vector <int> mat[MAXN];
//int d[MAXN];
//int ret[MAXN];
//int pos = 0;
//
//struct rev_int {
//	int value;
//	rev_int(int _x) : value(_x) {
//
//	}
//	bool operator<(const rev_int & _x) const {
//		return this->value > _x.value;
//	}
//};
//
//void toposort(int n)
//{
//	priority_queue<rev_int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] == 0) {
//			q.push(i);
//		}
//	}
//	while (!q.empty())
//	{
//		int top = q.top().value;
//		ret[pos++] = top;
//		q.pop();
//		for (int k = 0; k < mat[top].size(); k++)
//		{
//			d[mat[top][k]]--;
//			if (d[mat[top][k]] == 0)
//				q.push(mat[top][k]);
//		}
//	}
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n, m;
//		scanf("%d%d", &n, &m);
//		memset(d, 0, sizeof(d));
//		pos = 0;
//		for (int i = 1; i <= n; i++)
//			mat[i].clear();
//		while (m--)
//		{
//			int a, b;
//			scanf("%d%d", &a, &b);
//			mat[a].push_back(b);
//			d[b]++;
//		}
//		toposort(n);
//
//		printf("\n");
//	}
//	return 0;
//}