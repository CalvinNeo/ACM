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
//#include <memory>
//
//#define INF 0x3f3f3f3f
//#define MAXN 3500
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//
//typedef long long ll;
//typedef pair<int, int> PII;
//const int MO = 1e9 + 7;
//
//ll fpow(ll x, int n)
//{
//	ll res = 1;
//	while (n) {
//		if (n & 1) {
//			res = res*x%MO;
//		}
//		x = x*x%MO;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main()
//{
//	freopen("A-large.in", "r", stdin);
//	freopen("A-large.out", "w", stdout);
//	int T;
//	scanf("%d", &T);
//	for (int t = 1; t <= T; t++) {
//		ll n, m;
//		scanf("%I64d%I64d", &n, &m);
//		ll l = min(n, m) - 1;
//		ll sum = l*(l + 1) / 2 % MO;
//		ll sum2 = l*(l + 1) % MO*(2 * l + 1) % MO*fpow(6, MO - 2) % MO;
//		ll ans = sum*sum%MO - (n + m) % MO*sum2%MO + n*m%MO*sum%MO;
//		ans = (ans + MO) % MO;
//		printf("Case #%d: %I64d\n", t, ans);
//	}
//	return 0;
//}
