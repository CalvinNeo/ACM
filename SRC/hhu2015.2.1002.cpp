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
//using namespace  std;
//
//long long pow_mod(long long a, long long i, long long n) {
//	if (i == 0) return 1 % n;
//	int temp = pow_mod(a, i >> 1, n);
//	temp = temp*temp%n;
//	if (i & 1)
//	{
//		temp = (long long)temp*a%n;
//	}
//	return temp;
//}
//
//int main() {
//	int n, T;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n;
//		cout << pow_mod(n, n, 10) << endl;
//	}
//	//system("pause");
//	return 0;
//}
