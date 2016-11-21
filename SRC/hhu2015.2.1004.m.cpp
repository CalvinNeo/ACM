//#include <algorithm>
//#include <cstring>
//#include <iostream>
//
//
//#define INF 10000
//#define MAXPR 1300
//#define LL long long
//
//using namespace  std;
//
//template <typename T, const int N, const int MOD>
//class Matrix {
//	T val[N][N];
//
//public:
//	Matrix() { memset(val, 0, sizeof(val)); }
//	Matrix(T a[N][N]) { memcpy(val, a, sizeof(val)); }
//
//	Matrix operator*(const Matrix& c) const {
//		Matrix res;
//		for (int i = 0; i < N; ++i)
//			for (int j = 0; j < N; ++j)
//				for (int k = 0; k < N; ++k) {
//					res.val[i][j] += val[i][k] * c.val[k][j];
//					//防止矩阵元素变为负数，若不需要，去掉"+MOD"
//					res.val[i][j] = (res.val[i][j] + MOD) % MOD;
//				}
//		return res;
//	}
//
//	Matrix& operator*=(const Matrix& c) {
//		*this = *this * c;
//		return *this;
//	}
//
//	Matrix operator^(int k) const { //返回*this^k
//		Matrix res = Eye();
//		Matrix step(*this);
//		while (k) {
//			if (k & 1) res *= step;
//			k >>= 1;
//			step *= step;
//		}
//		return res;
//	}
//
//	Matrix Eye() const {
//		Matrix a;
//		for (int i = 0; i < N; i++) a.val[i][i] = 1;
//		return a;
//	}
//
//	void out() const {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++)
//				cout << val[i][j] << " ";
//			cout << "\n";
//		}
//	}
//
//	T* operator[](int i) { return val[i]; }
//};
//
//int main() {
//	LL n, k;
//	while (cin >> n >> k)
//	{
//		LL t;
//		LL top1 = 0, top2 = 0, presum = 0;
//
//		cin >> top1; cin >> top2;
//		presum = top1 + top2;
//
//		for (int i = 2; i < n; i++) {
//			//{找出初始S中最大的两个数a,b
//			cin >> t;
//			if (t > top1) {
//				if (t > top2) {
//					if (top1 < top2) top1 = t;
//					else top2 = t;
//				}
//				else top1 = t;
//			}
//			else if (t > top2) top2 = t;
//			//}
//			presum = (presum + t) % 10000007;
//		}
//		if (top2 > top1) swap(top1, top2); // 假设a>=b
//
//		LL rt[3][3] = { { 1, 1, 0 },{ 1, 0, 0 },{ 1, 1, 1 } };
//		//		LL aa[3][3] = { { 1, 1, 1 }, { 0, 1, 1 }, { 0, 1, 0 } };
//		//		Matrix<LL, 3, MOD> A(aa), X, Y;
//		//		X[0][0] = s, X[1][0] = a, X[2][0] = b;
//		//		Y = (A^k) * X;
//		//		X.out();
//		//		(A^k).out();
//		//		Y.out();
//		//		cout << Y[0][0] << "\n";
//		Matrix<LL, 3, 10000007> A(rt), X, Y;
//		X[2][0] = presum, X[0][0] = top1, X[1][0] = top2;
//		Y = (A^k) * X;
//		//Y.out();
//		presum = Y[2][0];
//		cout << presum << "\n";
//		//(A^k).out();
//		//X.out();
//	}
//	//system("pause");
//	return 0;
//}