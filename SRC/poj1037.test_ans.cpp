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
//#define MOD 1000000000
//const int MAXN = 25;
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//const int UP = 0;
//const int DOWN = 1;
//long long C[MAXN][MAXN][2]; 
//void Init(int n) {
//	memset(C,0,sizeof(C));
//	C[1][1][UP] = C[1][1][DOWN] = 1;
//	for( int i= 2 ;i <= n; ++ i) 
//		for( int k = 1; k <= i; ++ k ) {
//			for( int M = k; M <i; ++M ) 
//				C[i][k][UP] += C[i-1][M][DOWN];
//			for( int N = 1; N <= k-1; ++N )
//				C[i][k][DOWN] += C[i-1][N][UP];
//		}
//}
//void Print(int n, long long cc) {
//	long long skipped = 0; //�Ѿ������ķ�����
//	int seq[MAXN]; //����Ҫ����Ĵ�
//	int used[MAXN]; //ľ���Ƿ��ù�
//	memset(used,0,sizeof(used));
//	for( int i= 1; i<= n; ++ i) {
//		//����ȷ��ÿһ��λ��i��ľ�����
//		int k;int No = 0; 
//		//k��ʣ�µ�ľ����ĵ�No�̵�,No��1��ʼ��
//		for( k = 1; k <= n; ++k ) {
//			//ö��λ��i��ľ�����䳤��Ϊk 
//			if (!used[k]) {
//				++No; //k��ʣ�µ�ľ����ĵ�No�̵�
//				if (i == 1) {
//					if (skipped + C[n][No][UP] + C[n][No][DOWN] < cc)
//						skipped += C[n][No][UP] + C[n][No][DOWN];
//					else
//						break;
//				}
//				else {
//					if (k > seq[i - 1] && (i <= 2 || seq[i - 2] > seq[i - 1])) {
//						if (skipped + C[n - i + 1][No][DOWN] < cc)
//							skipped += C[n - i + 1][No][DOWN];
//						else
//							break;
//					}
//					else if (k < seq[i - 1] && (i <= 2 || seq[i - 2] < seq[i - 1])) {
//						if (skipped + C[n - i + 1][No][UP] < cc)
//							skipped += C[n - i + 1][No][UP];
//						else
//							break;
//					}
//				}
//			}
//		}
//		used[k] = true;
//		seq[i] = k;
//	}
//	for (int i = 1; i <= n; ++i)
//		if (i< n) printf("%d ", seq[i]);
//	else printf("%d", seq[i]);
//	printf("\n");
//}
//int main()
//{
//	int T, n; long long c;
//	Init(20);
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d %lld", &n, &c);
//		Print(n, c);
//	}
//	return 0;
//}