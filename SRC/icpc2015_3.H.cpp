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
//#define INF 1000
//#define OVERF 9223372036854
//using namespace std;
//#define LL long long
//#define ABS(n) (n < 0?-n:n)
//#define eps 1e-9
//
////double line[] = { 0.00000000,0.25000000,0.37500000,0.43750000,0.46875000,0.48437500,0.49218750,0.49609375,0.49804688,0.49902344,0.49951172,0.49975586,0.49987793,0.49993896,0.49996948,0.49998474,0.49999237,0.49999619,0.49999809,0.49999905,0.49999952,0.49999976,0.49999988,0.49999994,0.49999997,0.49999999,0.5 };
//
//void docase(int caseid) {
//	double k;
//	cin >> k;
//	//for (int i = 1; i < 500; i++)
//	//{
//		//if (fabs(0.5 - pow(0.5,i) - k)<eps)
//		//{
//		//	printf("-1\n");
//		//	return;
//		//}
//		//else if (k > 0.5 - pow(0.5, i)) {
//		//	printf("%d\n", 4 * (i+1));
//		//	return;
//		//}
//		//printf("%0.11lf\n", log2((0.5 - k)));;
//		//bool in_lin = false;
//		//for (int i = 0; i < sizeof(line)/sizeof(double); i++)
//		//{
//		//	if (fabs(line[i] - k) < eps)
//		//	{
//		//		in_lin = true;
//		//	}
//		//}
//		if (log(0.5 - k) / log(0.5) == (int)(log(0.5 - k) / log(0.5)))
//		{
//			printf("-1\n");
//		}
//		else {
//			printf("%d\n", 4 * (int)(-log2((0.5 - k))));
//		}
//	//}
//}
//int main() {
//	int C;
//#ifdef __ACM
//	freopen("1.txt", "r+", stdin);
//#endif
//	scanf("%d", &C);
//	//for (int i = 1; i < 500; i++)
//	//{
//	//	printf("%0.8lf\n", (double)fabs(0.5 - pow(0.5, i)));
//	//	//cout << (double)fabs(0.5 - pow(0.5, i)) << endl;
//	//}
//	//printf("-------------\n");
//	for (int i = 0; i < C; i++) {
//		docase(i + 1);
//	}
//#ifdef __ACM
//	scanf("%d", &C);
//#endif
//}