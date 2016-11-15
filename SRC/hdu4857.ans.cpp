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
//void toposort(int n)
//{
//	priority_queue<int> q;
//	// d是度
//	// ret是拓扑排序的结果
//	// mat是图
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] == 0)
//			q.push(i);
//	}
//	while (!q.empty())
//	{
//		int top = q.top();
//		ret[pos++] = top;
//		q.pop();
//		for (int k = 0; k < mat[top].size(); k++)
//		{
//			// 删掉所有top的出边
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
//			mat[b].push_back(a);
//			d[a]++;
//		}
//		toposort(n);
//		for (int i = n - 1; i > 0; i--)
//		{
//			printf("%d ", ret[i]);
//		}
//		printf("%d\n", ret[0]);
//	}
//	return 0;
//}