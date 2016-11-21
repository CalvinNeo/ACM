//#include <iostream> 
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
//#include <cmath>
//
//#define INF 10000
//#define MAXPR 1300
//
//using namespace  std;
//
//int mindiv[INF], phi[INF];
//void getPhi() {
//	for (int i = 1; i < INF; i++)
//	{
//		mindiv[i] = i;
//	}
//	for (int i = 2; i*i < INF; i++)
//	{
//		if (mindiv[i] == i)
//		{
//			for (int j = i*i; j < INF; j += i)
//			{
//				mindiv[j] = i;
//			}
//		}
//	}
//	phi[1] = 1;
//	for (int i = 2; i < INF; i++)
//	{
//		phi[i] = phi[i / mindiv[i]];
//		if ((i / mindiv[i]) % mindiv[i] == 0)
//		{
//			phi[i] *= mindiv[i];
//		}
//		else {
//			phi[i] *= mindiv[i] - 1;
//		}
//	}
//}
//
//long long countPhi(long long x) {
//	if (x<INF)
//	{
//		return phi[x];
//	}
//	else {
//		int i, ans = x;
//		for (i = 2; i<(long long)sqrt(x) + 1; i++)
//		{
//			if (x % i == 0)
//			{
//				ans = ans / i*(i - 1);
//				while (x % i == 0) x = x / i;
//			}
//		}
//		if (x>1) ans = ans / x*(x - 1);
//		return ans;
//	}
//}
//int main() {
//	int n, T;
//	getPhi();
//	while (cin >> n)
//	{
//		if (n == 0) return 0;
//		cout << countPhi(n) << endl;
//	}
//	//system("pause");
//	return 0;
//}
