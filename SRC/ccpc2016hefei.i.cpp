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
//#define MAX_RESULT 999999
//#define MAXN 40
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//LL l, r;
//LL ans = 0;
//
//LL lowbit(LL x) {
//	return x & (-x);
//}
//
//LL highbit(LL x) {
//	// 最高位的1
//	LL ans = 1;
//	while ((x >> 1) != 0) {
//		ans <<= 1;
//		x >>= 1;
//	}
//	return ans;
//}
//
//LL highblend(LL x) {
//	// 从最高位的1开始后面都是1
//	LL ans = 1;
//	while ((x >> 1) != 0) {
//		ans <<= 1;
//		ans |= 1;
//		x >>= 1;
//	}
//	return ans;
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%lld %lld", &l, &r);
//		// 这边应该是判断l == r
//		if (l + 1 == r) {
//			ans = l | r;
//		}
//		else {
//			LL f = (~r) & highblend(r);
//			// f为r的从最高有效位取反
//			ans = l;
//			LL lb;
//			// 寻找f的第一个1，也就是r的第一个0，把l对应的改成1
//			while ((lb = lowbit(f)) != 0) {
//				ans |= lb;
//				f &= (~lb);
//			}
//
//			ans |= r;
//		}
//		printf("%lld\n", ans);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}