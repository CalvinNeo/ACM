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
//#include <memory>
//
//#define INF 0x3f3f3f3f
//#define MAXN 3500
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//int arr[MAXN];
//
//void quicksort(int a[], int low, int high) {
//	if (low >= high)
//		return;
//	int first = low;
//	int last = high;
//	int key = a[first];
//	while (first < last) {
//		while (last > first && a[last] >= key) {
//			--last;
//		}
//		a[first] = a[last];
//		while (first < last && a[first] <= key) {
//			++first;
//		}
//		a[last] = a[first];
//	}
//	a[first] = key;
//	quicksort(a, low, first - 1);
//	quicksort(a, first + 1, high);
//}
//
////void qsort2(int a[], int start, int end) {
////	if (start >= end) return;
////	double mid = a[end];
////	int left = start, right = end - 1;
////	while (left < right) {
////		while (a[left] <= mid && left < right) left++;
////		while (a[right] >= mid && left < right) right--;
////		std::swap(a[left], a[right]);
////	}
////	if (a[left] >= a[end])
////	{
////		std::swap(a[left], a[end]);
////	}
////	else {
////		left++;
////	}
////	qsort2(a, start, left - 1);
////	qsort2(a, left + 1, end);
////}
//
//void qsort2(int a[], int start, int end) {
//	if (start >= end) {
//		return;
//	}
//	int l = start + 1;
//	int r = end;
//	int p = a[start];
//	while (l < r) {
//		while (l < r && a[l] <= p) l++;
//		while (l < r && a[r] >= p) r--;
//		swap(a[l], a[r]);
//	}
//	if (a[l] <= p)
//	{
//		swap(a[l], a[start]);
//	}
//	else {
//		l++;
//	}
//	qsort2(a, start, l - 1);
//	qsort2(a, l + 1, end);
//}
//
//struct Cls {
//	int a = 3;
//	int b = 5;
//	Cls(int xx, int yy) {
//
//	}
//};
//
//struct {
//	int a;
//} g;
//
//int * xxx = nullptr;
//int testptr() {
//	int * aa = new int(20);
//	xxx = aa;
//	return *aa;
//}
//
//struct XXXXX {
//
//};
//struct YYYYY {
//	int a;
//	//char b;
//	//static int c;
//	//virtual int f1();
//	//virtual int f2();
//};
//
//struct BB {
//	int i = 1;
//	int j = 1;
//	virtual void get() {
//		i = 3;
//	}
//};
//
//struct DD :public BB {
//	void get() {
//		BB::get();
//		j = 4;
//	}
//};
//
//struct CSS {
//	std::shared_ptr<int> XX;
//};
//struct CSS2 {
//	int XX;
//};
//
//int main() {
//	cout << std::is_pod<std::shared_ptr<int>>::value << endl;
//	cout << std::is_pod<std::unique_ptr<int>>::value << endl;
//	cout << std::is_trivially_copyable<std::shared_ptr<int>>::value << endl;
//	cout << std::is_trivially_copyable<std::unique_ptr<int>>::value << endl;
//	cout << std::is_standard_layout<std::shared_ptr<int>>::value << endl;
//	cout << std::is_standard_layout<std::unique_ptr<int>>::value << endl;
//	cout << std::is_trivial<std::shared_ptr<int>>::value << endl;
//	cout << std::is_trivial<std::unique_ptr<int>>::value << endl;
//	cout << std::is_trivial<CSS>::value << endl;
//	cout << std::is_trivial<CSS2>::value << endl;
//	DD ddddd;
//	ddddd.get();
//	cout << ddddd.i << " " << ddddd.j << endl;
//	cout << sizeof(XXXXX) << endl;
//	cout << sizeof(YYYYY) << endl;
//	int t;
//	int x = testptr();
//	cout << x << endl;
//	cout << *xxx << endl;
//	g.a = 1;
//	Cls cls(1, 2);
//	Cls * cls2 = new Cls(1, 2);
//	cout << cls.a << endl;
//	cout << cls2->a << endl;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", arr + i);
//		}
//		qsort2(arr, 0, n - 1);
//		for (int i = 0; i < n; i++)
//		{
//			printf(" %d", arr[i]);
//		}
//		printf("\n");
//	}
//}