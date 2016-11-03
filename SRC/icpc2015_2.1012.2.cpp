//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//
//#define INF 5000000
//#define OVERF 9223372036854
//using namespace std;
//#define LL long long
//#define ABS(n) (n < 0?-n:n)
//struct PR {
//	unsigned short index;
//	int value;
//	PR(int i, int v) {
//		index = i;
//		value = v;
//	}
//	PR() {
//		index = -1;
//		value = -1;
//	}
//};
//
//LL MMAX(LL x, LL y) {
//	return x > y ? x : y;
//}
//
//bool compare(const PR &x, const PR &y)
//{
//	if (x.value == y.value)
//		return x.index > y.index;
//	return x.value > y.value;
//}
//bool compareneg(const PR &x, const PR &y)
//{
//	if (x.value == y.value)
//		return x.index > y.index;
//	return x.value < y.value;
//}
//bool abscompare(const PR &x, const PR &y)
//{
//	if (ABS(x.value) == ABS(y.value))
//		return x.index > y.index;
//	return ABS(x.value) > ABS(y.value);
//}
//bool abscompareneg(const PR &x, const PR &y)
//{
//	if (ABS(x.value) == ABS(y.value))
//		return x.index > y.index;
//	return ABS(x.value) < ABS(y.value);
//}
//
//priority_queue<PR, vector<PR>, compare> sqrasc;
//priority_queue<PR, vector<PR>, compareneg> sqrdec;
//priority_queue<PR, vector<PR>, abscompare> linasc;
//priority_queue<PR, vector<PR>, abscompareneg> lindec;
//
//void getbiggest(int t, int & top1, int & top2)
//{
//	if (t > top1) {
//		if (t > top2) {
//			if (top1 < top2) top1 = t;
//			else top2 = t;
//		}
//		else top1 = t;
//	}
//	else if (t > top2) top2 = t;
//	if (top2 > top1) swap(top1, top2);
//}
//void getsmallest(int t, int & top1, int & top2)
//{
//	if (t < top1) {
//		if (t < top2) {
//			if (top1 > top2) top1 = t;
//			else top2 = t;
//		}
//		else top1 = t;
//	}
//	else if (t < top2) top2 = t;
//	if (top2 < top1) swap(top1, top2);
//}
//void getbiggestabs(int t, int & top1, int & top2)
//{
//	if (ABS(t) > top1) {
//		if (ABS(t) > top2) {
//			if (top1 < top2) top1 = ABS(t);
//			else top2 = ABS(t);
//		}
//		else top1 = ABS(t);
//	}
//	else if (ABS(t) > top2) top2 = ABS(t);
//	if (top2 > top1) swap(top1, top2);
//}
//void getsmallestabs(int t, int & top1, int & top2)
//{
//	if (ABS(t) < top1) {
//		if (ABS(t) < top2) {
//			if (top1 > top2) top1 = ABS(t);
//			else top2 = ABS(t);
//		}
//		else top1 = ABS(t);
//	}
//	else if (ABS(t) < top2) top2 = ABS(t);
//	if (top2 < top1) swap(top1, top2);
//}
//
//void docase(int caseid) {
//	int n, a, b;
//
//	LL rt = -OVERF;
//	scanf("%d%d%d", &n, &a, &b);
//	int indexsqr = -1, indexlin = -1, indexsqr2 = -1, indexlin2 = -1;
//	int vlin , vlin2 , vsqr , vsqr2 ;
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		scanf("%d", &t);
//		//ABS FOR VLIN & VLIN2
//		if (b < 0)
//		{
//			//FIND MIN
//			vlin = 99999999; vlin2 = 99999999;
//			getsmallest(t, vlin, vlin2);
//		}
//		else {
//			//FIND MAX
//			vlin = -99999999; vlin2 = -99999999;
//			getbiggest(t, vlin, vlin2);
//		}
//
//
//		if (a < 0)
//		{
//			//FIND MIN
//			vsqr = 99999999; vsqr2 = 99999999;
//			getsmallestabs(t, vsqr, vsqr2);
//		}
//		else {
//			//FIND MAX
//			vsqr = -99999999; vsqr2 = -99999999;
//			getbiggestabs(t, vsqr, vsqr2);
//		}
//	}
//
//	if (indexsqr == indexlin) {
//		rt = MMAX((LL)a * vsqr2 * vsqr2 + b * vlin,
//			(LL)a * vsqr * vsqr + b * vlin2);
//	}
//	else {
//		rt = (LL)a * vsqr * vsqr + b * vlin;
//	}
//	printf("Case #%d: %d\n", caseid, rt);
//}
//
//int main() {
//	int C;
//#ifdef __ACM
//	freopen("1.txt", "r+", stdin);
//#endif
//	scanf("%d", &C);
//	for (int i = 0; i < C; i++) {
//		docase(i + 1);
//	}
//#ifdef __ACM
//	scanf("%d", &C);
//#endif
//}
