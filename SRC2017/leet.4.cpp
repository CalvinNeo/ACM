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
//using namespace std;
//
//int findMedian_logn(int vec1[], int n1, int vec2[], int n2)
//{
//	int m1 = (n1 - 1) / 2, m2 = (n2 - 1) / 2;
//	if (n1 == 1)
//	{//递归结束条件
//		if (n2 == 1)
//			return vec1[0] < vec2[0] ? vec1[0] : vec2[0];
//		if (n2 % 2 == 0)
//		{
//			if (vec1[0] >= vec2[m2 + 1])
//				return vec2[m2 + 1];
//			else if (vec1[0] <= vec2[m2])
//				return vec2[m2];
//			else return vec1[0];
//		}
//		else
//		{
//			if (vec1[0] >= vec2[m2])
//				return vec2[m2];
//			else if (vec1[0] <= vec2[m2 - 1])
//				return vec2[m2 - 1];
//			else return vec1[0];
//		}
//	}
//	else if (n2 == 1)
//	{//递归结束条件
//		if (n1 % 2 == 0)
//		{
//			if (vec2[0] >= vec1[m1 + 1])
//				return vec1[m1 + 1];
//			else if (vec2[0] <= vec1[m1])
//				return vec1[m1];
//			else return vec2[0];
//		}
//		else
//		{
//			if (vec2[0] >= vec1[m1])
//				return vec1[m1];
//			else if (vec2[0] <= vec1[m1 - 1])
//				return vec1[m1 - 1];
//			else return vec2[0];
//		}
//	}
//	else
//	{
//		int cutLen = n1 / 2 > n2 / 2 ? n2 / 2 : n1 / 2;//注意每次减去短数组的一半，如果数组长度n是奇数，一半是指n-1/2
//		if (vec1[m1] == vec2[m2])return vec1[m1];
//		else if (vec1[m1] < vec2[m2])
//			return findMedian_logn(&vec1[cutLen], n1 - cutLen, vec2, n2 - cutLen);
//		else
//			return findMedian_logn(vec1, n1 - cutLen, &vec2[cutLen], n2 - cutLen);
//	}
//}
//
//int main() {
//	int v1[] = { 1,3,6,17,19 };
//	int v2[] = { 5,10,11 };
//	cout << findMedian_logn(v1, 2, v2, 2);
//#define op +
//	int a;
//	a = 0;
//	a op= 3;
//	cout << a << endl;
//	system("pause");
//}