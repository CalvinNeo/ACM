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
//#define MAXN 100010
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int ht[MAXN];
//int lb[MAXN];
//int rb[MAXN];
//
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF && n != 0) {
//		//memset(ht, 0, sizeof ht);
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d", &ht[i]);
//			lb[i] = rb[i] = i;
//		}
//		// important
//		ht[n + 1] = ht[0] = -1;
//		LL maxa = -1;
//		for (int i = 1; i <= n; i++)
//		{
//			while (ht[lb[i] - 1] >= ht[i])
//			{
//				lb[i] = lb[lb[i] - 1];  
//			}
//		}
//		for (int i = n; i >= 1; i--)
//		{
//			while (ht[rb[i] + 1] >= ht[i])
//			{
//				rb[i] = rb[rb[i] + 1];
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			LL len = (LL)rb[i] - lb[i] + 1;
//			maxa = max(maxa, len * (LL)ht[i]);
//		}
//		printf("%lld\n", maxa);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}