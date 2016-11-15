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
//int ls[64], rs[64];
//int lenl, lenr;
//
//inline LL getll(int * arr, int len) {
//	LL x = 0;
//	for (int i = 0; i < len; i++)
//	{
//		x += ((LL)arr[i] << (LL)i);
//	}
//	return x;
//}
//
//bool no_gt() {
//	for (int i = lenr - 1; i >= 0; i--) {
//		if (ls[i] > rs[i]) {
//			return false;
//		}
//		else if (ls[i] < rs[i]) {
//			return true;
//		}
//		else {
//			continue;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		LL ll, rr;
//		scanf("%lld %lld", &ll, &rr);
//		memset(ls, 0, sizeof ls);
//		memset(rs, 0, sizeof rs);
//		l = ll; r = rr;
//		lenl = 0;
//		while (l != 0) {
//			ls[lenl] = (l & 1);
//			l >>= 1;
//			lenl++;
//		}
//		lenr = 0;
//		while (r != 0) {
//			rs[lenr] = (r & 1);
//			r >>= 1;
//			lenr++;
//		}
//		for (int i = lenr - 1; i >= 0; i--)
//		{
//			if (rs[i] == 0) {
//				ls[i] = 1;
//				if (no_gt()) {
//					ls[i] = 1;
//				}
//				else {
//					ls[i] = 0;
//				}
//			}
//		}
//		LL newl = getll(ls, lenr);
//		LL newr = getll(rs, lenr);
//		printf("%lld\n", newl | newr);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}