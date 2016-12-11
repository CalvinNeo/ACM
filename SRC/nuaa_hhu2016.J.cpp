//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int INF=1<<30;
//int n,m;
//char mp[1010][1010];
//int dp[1010][1010];
//
//int main()
//{
//	scanf("%d%d",&n,&m);
//	for (int i=0; i<n; i++) {
//		scanf("%s",mp[i]);
//	}
//	memset(dp,0,sizeof(dp));
//	int ans=0;
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<m; j++) {
//			if (mp[i][j]=='O') {
//				dp[i][j]=0;
//			} else {
//				int res=INF;
//				if (i) res=min(res,dp[i-1][j]);
//				else res=0;
//				if (j) res=min(res,dp[i][j-1]);
//				else res=0;
//				if (i&&j) res=min(res,dp[i-1][j-1]);
//				else res=0;
//				dp[i][j]=res+1;
//			}
//			ans=max(ans,dp[i][j]);
//		}
//	}
//	printf("%d\n",ans);
//	return 0;
//}
