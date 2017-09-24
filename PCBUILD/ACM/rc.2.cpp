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
//#define MAXN 3500
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//
//int tree[MAXN];
//int cnt;
//
//int findnd(int root, int v) {
//	if (tree[root] == -1)
//	{
//		return -1;
//	}
//	if (tree[root] == v)
//	{
//		return root;
//	}
//	else if (v < tree[root])
//	{
//		return findnd(root * 2, v);
//	}
//	else {
//		return findnd(root * 2 + 1, v);
//	}
//}
//
//void addnd(int root, int v) {
//	if (tree[root] == -1)
//	{
//		tree[root] = v;
//		cnt++;
//	}
//	else if (v < tree[root])
//	{
//		return addnd(root * 2, v);
//	}
//	else {
//		return addnd(root * 2 + 1, v);
//	}
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, q;
//		int x;
//		memset(tree, -1, sizeof tree);
//		cnt = 0;
//		scanf("%d%d", &n, &q);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			addnd(1, x);
//		}
//		for (int i = 0; i < q; i++)
//		{
//			scanf("%d", &x);
//			int ans = findnd(1, x);
//			printf("find %d at : %d\n", x, ans);
//		}
//	}
//	system("pause");
//}