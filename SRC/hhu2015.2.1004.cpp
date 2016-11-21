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
//void matmul(LL(*mat)[3], LL (*opmat)[3]){
//	LL newmat[3][3] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
//	for (LL i = 0; i < 3; i++) {
//		for (LL j = 0; j < 3; j++) {
//			for (LL k = 0; k < 3; k++)
//			{
//				newmat[i][j] += (mat[i][k] * opmat[k][j]);
//				newmat[i][j] = (newmat[i][j] + 10000007) % 10000007;
//			}
//		}
//	}
// 
//	for (LL i = 0; i < 3; i++) {
//		for (LL j = 0; j < 3; j++) {
//			mat[i][j] = newmat[i][j];
//		}
//	}
//}
//void fastmatmul(LL N, LL(*rt)[3], LL (*A)[3]){
//	while(N)
//	{
//		if(N&1)
//			matmul(rt,A);
//		N>>=1;
//		matmul(A,A);
//	}
//}
//void print(LL(*rt)[3]){
//	for (LL i = 0; i < 3; i++)
//	{
//		for (LL j = 0; j < 3; j++)
//		{
//			cout << rt[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main(){
//	LL n, k;
//	std::ios::sync_with_stdio(false);
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
//		LL rt[3][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };
//		LL A[3][3] = { { 1, 1, 0 }, { 1, 0, 0 }, { 1, 1, 1 } };
//
//		fastmatmul(k , rt, A);
//		presum = top1 * rt[2][0] + top2 * rt[2][1] + presum * rt[2][2];
//
//		presum %= 10000007;
//		cout << presum << "\n";
//		//print(rt);
//	}
//	//system("pause");
//	return 0;
//}