//#include <iostream> 
//#include <vector>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include "stdlib.h" 
//#include "time.h"
//#include <cmath>
//
//#define INF 1000
//#define MAXPR 1300
//#define LL long long
//
//using namespace std;
//
//int MIN_FACTOR[INF];
//
//LL number_sum(LL x) {
//	LL s = 0;
//	while (x) {
//		s += x % 10;
//		x /= 10;
//	}
//	return s;
//}
//LL test_factor(LL n) {
//	if (n < INF) {
//		if (MIN_FACTOR[n] == -1) {
//			if (n == 1) MIN_FACTOR[n] = 1;//1当做质数
//			for (int i = 2; i < (int)sqrt((double)n) + 1; i++)
//			{
//				if (n%i == 0) {
//					MIN_FACTOR[n] = i;
//					break;
//				}
//
//			}
//			if (MIN_FACTOR[n] == -1) MIN_FACTOR[n] = 1;//质数
//		}
//		return MIN_FACTOR[n];
//	}
//
//	if (n == 1) return 1;//1当做质数
//	for (int i = 2; i < (int)sqrt((double)n) + 1; i++)
//	{
//		if (n%i == 0) {
//			return i;
//		}
//
//	}
//	return 1;//质数
//}
//
//bool isSmith(int c, int plau, int maxdigit_sum)
//{
//	int i, right_sum, n = plau;
//	right_sum = 0;
//	if (test_factor(n) == 1)
//		return false;
//	while (true)
//	{
//		i = test_factor(n);
//		if (i == 1) {
//			break;
//		}
//		while (n%i == 0) {
//			right_sum += number_sum(i);
//			n /= i;
//		}
//		if (right_sum > maxdigit_sum)
//			return false;
//	}
//	if (n > 1) right_sum += number_sum(n);
//	if (right_sum == maxdigit_sum && plau > c)
//		return true;
//	return false;
//}
//
//int main() {
//
//	for (size_t i = 0; i < INF; i++)
//	{
//		MIN_FACTOR[i] = -1;
//	}
//
//
//	int c = 0;
//	cin >> c;
//	while (c != 0)
//	{
//		LL plau_number = c + 1;
//		while (!isSmith(c, plau_number, number_sum(plau_number))) plau_number++;
//		cout << plau_number << endl;
//		cin >> c;
//	}
//
//	return 0;
//}
