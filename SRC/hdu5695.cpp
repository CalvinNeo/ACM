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
//#define MAXN 100010
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int d[MAXN];
//vector<int> mat[MAXN];
//int ret[MAXN];
//int pos;
//
//struct rev_int {
//	int value;
//	rev_int(int _x) : value(_x) {
//
//	}
//	bool operator<(const rev_int & _x) const {
//		return this->value < _x.value;
//	}
//};
//
//void toposort(int n)
//{
//	priority_queue<rev_int> q;
//	// d是度
//	// ret是拓扑排序的结果
//	// mat是图
//	//for (int i = 1; i <= n; i++)
//	for (int i = n; i >= 1; i--)
//	{
//		if (d[i] == 0) {
//			q.push(rev_int(i));
//		}
//	}
//	while (!q.empty())
//	{
//		int top = q.top().value;
//		ret[pos + 1] = min(top, ret[pos]);
//		pos++;
//		q.pop();
//		for (int k = 0; k < mat[top].size(); k++)
//		{
//			d[mat[top][k]]--;
//			if (d[mat[top][k]] == 0) {
//				q.push(rev_int(mat[top][k]));
//			}
//		}
//	}
//}
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int n, m;
//		scanf("%d%d", &n, &m);
//		int a, b;
//		memset(d, 0, sizeof(d));
//		pos = 0; ret[0] = INF;
//		for (int i = 1; i <= n; i++)
//			mat[i].clear();
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d %d", &a, &b);
//			// b 在 a 后面，从a到b有路径
//			mat[a].push_back(b);
//			// a有入度
//			d[b]++;
//		}
//		toposort(n);
//		int s = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			s += ret[i];
//		}
//		printf("%d\n", s);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}