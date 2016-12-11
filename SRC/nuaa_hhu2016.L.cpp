//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=2010;
//struct Node {
//	double pro;
//	double exp;
//} dp[N][N][2];
//
//int main()
//{
//	scanf("%d%d%d%d",&n,&m,&v,&e);
//	for (int i=1;i<=n;i++) {
//		scanf("%d",&c[i]);
//	}
//	for (int i=1;i<=n;i++) {
//		scanf("%d",&d[i]);
//	}
//	for (int i=1;i<=n;i++) {
//		scanf("%lf",&k[i]);
//	}
//	
//	memset(cost,0x3f,sizeof(cost));
//	for (int i=1;i<=e;i++) {
//		scanf("%d%d%d",&x,&y,&z);
//		cost[x][y]=cost[y][x]=min(cost[x][y],z);
//	}
//	/****Floyd****/
//	for (int k=1;k<=v;k++) {
//		for (int i=1;i<=v;i++) {
//			for (int j=1;j<=v;j++) {
//				if (i!=j&&cost[i][k]+cost[k][j]<cost[i][j]) {
//					cost[i][j]=cost[i][k]+cost[k][j];
//				}
//			}
//		}
//	}
//	/****Floyd****/
//	for (int i=1;i<=n;i++) {
//		for (int j=1;j<=m;j++) {
//			
//			dp[i][j][0].exp=
//			dp[i-1][j-1][0].pro*cost[c[i-1]][d[i]]
//			
//			dp[i][j]
//			
//			
//		}
//	}
//}
