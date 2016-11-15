//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//using namespace std;
//const double eps = 0.0000000001;
//double f[100];
//void init() {
//	f[0] = 0.25;
//	int t = 4;
//	for (int i = 1; i <= 28; i++) {
//		t *= 2;
//		f[i] = f[i - 1] + 1 / (double)t;
//	}
//}
//void output() {
//	for (int i = 0; i <= 28; i++) {
//		printf("%.10lf ", f[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int t;
//	init();
//	scanf("%d", &t);
//	while (t--) {
//		double k;
//		scanf("%lf", &k);
//		int cnt = 0;
//		int flag = 0;
//		if (k < eps) {
//			puts("-1");
//			continue;
//		}
//		for (int i = 0; i <= 28; i++) {
//			if (fabs(f[i] - k) < eps) {
//				flag = 1;
//			}
//			if (f[i] > k) {
//				cnt = i;
//				break;
//			}
//		}
//		if (flag) {
//			puts("-1");
//			continue;
//		}
//		int ans = (cnt + 1) * 4;
//		printf("%d\n", ans);
//	}
//}