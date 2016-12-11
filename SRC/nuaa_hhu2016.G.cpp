//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=2010;
//int c[N][N],ans[N][N];
//
//int main()
//{
//	int T,k,n,m;
//	scanf("%d%d",&T,&k);
//	memset(c,0xff,sizeof(c));
//	c[0][0]=1;
//	for (int i=1;i<=2000;i++) {
//		c[i][0]=1;
//		for (int j=1;j<i;j++) {
//			c[i][j]=(c[i-1][j]+c[i-1][j-1])%k;
//		}
//		c[i][i]=1;
//	}
//	ans[0][0]=0;
//	for (int i=1;i<=2000;i++) {
//		ans[i][0]=0;
//		for (int j=1;j<=2000;j++) {
//			ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1]+(c[i][j]==0);
////			ans[i][j]=(c[i][j]==0);
////			if (i) {
////				if (j) {
////					ans[i][j]+=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1];
////				} else {
////					ans[i][j]+=ans[i-1][j];
////				}
////			} else {
////				if (j) {
////					ans[i][j]+=ans[i][j-1];
////				} else {
////				}
////			}
//		}
//	}
////	puts("CNM:");
////	for (int i=0;i<=10;i++) {
////		for (int j=0;j<=10;j++) {
////			printf("%d ",c[i][j]);
////		}
////		puts("");
////	}
////	puts("ANS:");
////	for (int i=0;i<=10;i++) {
////		for (int j=0;j<=10;j++) {
////			printf("%d ",ans[i][j]);
////		}
////		puts("");
////	}
//	while (T--) {
//		scanf("%d%d",&n,&m);
//		printf("%d\n",ans[n][m]);
//	}
//	return 0;
//}
