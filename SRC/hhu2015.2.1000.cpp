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
//
//#define INF 10001
//#define MAXPR 1300
//
//using namespace std;
//
//bool valid[INF];
//vector<short> primes;
//void getPrime() {
//	int i, j;
//	for (i = 2; i < INF; i++)
//	{
//		valid[i] = true;
//	}
//	for (i = 2; i < INF; i++)
//	{
//		if (valid[i]) {
//			if (INF / i < i) break;
//			for (j = i*i; j < INF; j += i)
//			{
//				valid[j] = false;
//			}
//		}
//	}
//	for (int i = 0; i < INF; i++)
//	{
//		if (valid[i]) primes.push_back(i);
//	}
//};
//int main() {
//
//	getPrime();
//	int n;
//
//	while (cin >> n)
//	{
//		if (n == 0)return 0;
//		int count = 0;
//		for (size_t i = 0; i < primes.size(); i++)
//		{
//			for (size_t j = 0; j < primes.size(); j++)
//			{
//				if (primes[i] + primes[j] > n) break;
//				if (primes[i] + primes[j] == n)
//				{
//					count++;
//				}
//			}
//		}
//		cout << count / 2 << endl;
//	}
//	//system("pause");
//}
