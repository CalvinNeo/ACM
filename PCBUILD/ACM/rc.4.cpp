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
//#define MAXN 3
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//#define eps 1e-9
//double a[MAXN][MAXN], x[MAXN];
//int equ, var;
//int gauss()
//{
//	int i, j, k, col, max_r;
//	for (k = 0, col = 0; k<equ&&col<var; k++, col++)
//	{
//		max_r = k;
//		for (i = k + 1; i<equ; i++)
//			if (fabs(a[i][col])>fabs(a[max_r][col]))
//				max_r = i;
//		if (fabs(a[max_r][col])<eps) return 0;
//		if (k != max_r)
//		{
//			for (j = col; j<var; j++)
//				swap(a[k][j], a[max_r][j]);
//			swap(x[k], x[max_r]);
//		}
//		x[k] /= a[k][col];
//		for (j = col + 1; j<var; j++)a[k][j] /= a[k][col];
//		a[k][col] = 1;
//		for (i = 0; i<equ; i++)
//			if (i != k)
//			{
//				x[i] -= x[k] * a[i][k];
//				for (j = col + 1; j<var; j++)a[i][j] -= a[k][j] * a[i][col];
//				a[i][col] = 0;
//			}
//	}
//	return 1;
//};
//int main() {
//	equ = var = 3;
//	a[0][0] = 1; a[0][1] = 2; a[0][2] = 1;
//	a[1][0] = 2; a[1][1] = -1; a[1][2] = 3;
//	a[2][0] = 3; a[2][1] = 1; a[2][2] = 2;
//	x[0] = 7; x[1] = 7; x[2] = 18;
//	gauss();
//	printf("%lf %lf %lf", x[0], x[1], x[2]);
//	system("pause");
//}