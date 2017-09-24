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
//#define MAXN 50010
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//double e[1010][1010];
//
//double solve(int n, int s) {
//	memset(e, 0, sizeof e);
//	//e[1][1] = 1.0;
//	//for (int i = 2; i <= n; i++)
//	//{
//	//	double p_up = double(n - i + 1)  / area;
//	//	e[i][1] = p_up * (e[i - 1][1] + 1);
//	//}
//	//for (int j = 2; j <= s; j++)
//	//{
//	//	double p_left = double(s - j + 1) / area;
//	//	e[1][j] = p_left * (e[1][j - 1] + 1);
//	//}
//	e[0][0] = 1.0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= s; j++)
//		{
//			double p_up = double(n - i + 1) * j / (double(n * s) - (i - 1) * j);
//			double p_left = double(i) * (s - j + 1) / (double(n * s) - i * (j - 1));
//			double p_diag = double(n - i + 1) * (s - j + 1) / (double(n * s) - (i - 1) * (j - 1));
//			//double p_rep = double(i * j) / (double(n * s) - i * j);
//			//printf("p_up %.4f, p_left %.4f, p_diag %.4f, p_rep %.4f, total: %.4f\n", p_up , p_left , p_diag, p_rep, p_up + p_left + p_diag + p_rep);
//			//double tot = p_up + p_left + p_diag + p_rep;
//			//p_up /= tot;
//			//p_left /= tot;
//			//p_diag /= tot;
//			//p_rep /= tot;
//			double from_up = p_up * (e[i - 1][j] + 1);
//			double from_left = p_left * (e[i][j - 1] + 1);
//			double from_diag = p_diag * (e[i - 1][j - 1] + 1);
//			//double from_rep = p_rep * (e[i][j] + 1);
//			//printf("%d %d: up %.4f left %.4f diag %.4f\n", i, j, from_up, from_left, from_diag);
//			e[i][j] = from_up + from_left + from_diag;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= s; j++)
//		{
//			printf("%f\t", e[i][j]);
//		}
//		puts("");
//	}
//	return e[n][s];
//}
//
//int main() {
//	int n, s;
//	while (~scanf("%d %d", &n, &s)) {
//		double sol = solve(n, s);
//		printf("%.4f\n", sol);
//	}
//	return 0;
//}