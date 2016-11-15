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
//#define MOD 100000007
//#define MAXN 510
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//LL factor(LL x) {
//	LL ans = 1;
//	for (LL i = 2; i <= x; i++)
//	{
//		ans *= i;
//	}
//	return ans;
//}
//
//int * get_nth_permutation(LL n, LL c) {
//	bool * vis = new bool[n + 2];
//	int * ans = new int[n + 1];
//	fill(vis, vis + n + 2, false);
//	int kk;
//	for (int i = 1; i <= n; i++)
//	{
//		int k = 0;
//		for (kk = 1; kk <= n; kk++)
//		{
//			if (!vis[kk])
//			{
//				k++;
//				LL delta_c = factor(n - i);
//				if (c > delta_c) {
//					c -= delta_c;
//				}
//				else {
//					break;
//				}
//			}
//		}
//		vis[kk] = true;
//		ans[i] = kk;
//	}
//	delete[] vis;
//	return ans;
//}
//
//int * correct_nth_permutation(int n, int c) {
//	int * ans = new int[n + 2];
//	for (int i = 1; i <= n; i++)
//	{
//		ans[i] = i;
//	}
//	for (int i = 1; i < c; i++)
//	{
//		next_permutation(ans + 1, ans + n + 1);
//	}
//	return ans;
//}
//
//int main() {
//	int n, c;
//	n = 7; c = 23;
//	int * ans1 = get_nth_permutation(n, c);
//	int * ans2 = correct_nth_permutation(n, c);
//	bool ok = true;
//	for (int i = 1; i <= n; i++)
//	{
//		if (ans1[i] != ans2[i]) {
//			ok = false;
//			break;
//		}
//	}
//	if (ok) {
//		puts("Yes");
//	}
//	else {
//		puts("No");
//		puts("Me");
//		for (int i = 1; i <= n; i++)
//		{
//			printf(" %d", ans1[i]);
//		}
//		puts("");
//		puts("Ans");
//		for (int i = 1; i <= n; i++)
//		{
//			printf(" %d", ans2[i]);
//		}
//		puts("");
//	}
//	delete[] ans1;
//	delete[] ans2;
//#ifdef __ACM
//	system("pause");
//#endif
//}