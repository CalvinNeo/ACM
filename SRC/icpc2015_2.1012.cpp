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
//PR answer[INF];
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
//void docase(int caseid) {
//	int n, a, b;
//
//	LL rt = -OVERF;
//	scanf("%d%d%d", &n, &a, &b);
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		scanf("%d", &t);
//		answer[i].index = i;
//		answer[i].value = t;
//		//ans2[i].index = i;
//		//ans2[i].value = ABS(t);
//	}
//	int indexsqr, indexlin, indexsqr2, indexlin2,vlin,vlin2,vsqr,vsqr2;
//	if(b < 0)
//		sort(answer, answer + n, compareneg);
//	else
//		sort(answer, answer + n, compare);
//
//	indexlin = answer[0].index;
//	indexlin2 = answer[1].index;
//	vlin = answer[0].value;
//	vlin2 = answer[1].value;
//
//	if (a < 0)
//		sort(answer, answer + n, abscompareneg);
//	else
//		sort(answer, answer + n, abscompare);
//
//	indexsqr = answer[0].index;
//	indexsqr2 = answer[1].index;
//	vsqr = answer[0].value;
//	vsqr2 = answer[1].value;
//
//	if (indexsqr == indexlin) {
//		rt = MMAX((LL)a * vsqr2 * vsqr2 + b * vlin,
//			(LL)a * vsqr * vsqr + b * vlin2);
//	}
//	else {
//		rt = (LL)a * vsqr * vsqr + b * vlin;
//	}
//	//if (a > 0) {
//	//	t1i = 0;
//	//}
//	//else {
//	//	t1i = n - 1;
//	//}
//	//if (b > 0) {
//	//	t2i = 0;
//	//}
//	//else {
//	//	t2i = n - 1;
//	//}
//	//if (ans2[t1i].index == answer[t2i].index)
//	//{
//	//	if (a > 0) {
//	//		delta1 = 1;
//	//	}
//	//	else {
//	//		delta1 = - 1;
//	//	}
//	//	if (b > 0) {
//	//		delta2 = 1;
//	//	}
//	//	else {
//	//		delta2 = - 1;
//	//	}
//	//	rt = MMAX( ((LL)(a * ans2[t1i + delta1].value)) * ans2[t1i + delta1].value + ((LL)(b * answer[t2i].value)),
//	//		((LL)a * ans2[t1i].value) * ans2[t1i].value + ((LL)(b * answer[t2i + delta2].value)));
//	//}
//	//else {
//	//	rt = ((LL)(a * ans2[t1i].value)) * ans2[t1i].value + ((LL)b * answer[t2i].value);
//	//}
//
//	printf("Case #%d: %d\n",caseid,rt);
//}
//
//int main() {
//	int C;
//#ifdef __ACM
//	freopen("1.txt", "r+", stdin);
//#endif
//	scanf("%d", &C);
//	for (int i = 0; i < C;i++) {
//		docase(i + 1);
//	}
//#ifdef __ACM
//	scanf("%d", &C);
//#endif
//}
