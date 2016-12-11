//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int dx[4]= {1,-1,0,0};
//const int dy[4]= {0,0,1,-1};
//int n,m;
//char mp[1010][1010];
//int vis[1010][1010];
//
//void dfs(int x,int y)
//{
//	vis[x][y]=1;
////	printf("%d %d\n",x,y);
//	for (int i=0; i<4; i++) {
//		int xx=x+dx[i];
//		int yy=y+dy[i];
//		if (xx<0||xx>=n||yy<0||yy>=m) {
//			continue;
//		}
//		if (mp[xx][yy]=='X') {
//
//		} else {
//			if (!vis[xx][yy]) {
//				dfs(xx,yy);
//			}
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d%d",&n,&m);
//	for (int i=0; i<n; i++) {
//		scanf("%s",mp[i]);
//	}
//	memset(vis,0,sizeof(vis));
//	for (int i=0,j=0; j<m; j++) {
//		if (mp[i][j]=='O'&&!vis[i][j]) {
//			dfs(i,j);
//		}
//	}
//	for (int i=n-1,j=0; j<m; j++) {
//		if (mp[i][j]=='O'&&!vis[i][j]) {
//			dfs(i,j);
//		}
//	}
//	for (int i=0,j=0; i<n; i++) {
//		if (mp[i][j]=='O'&&!vis[i][j]) {
//			dfs(i,j);
//		}
//	}
//	for (int i=0,j=m-1; i<n; i++) {
//		if (mp[i][j]=='O'&&!vis[i][j]) {
//			dfs(i,j);
//		}
//	}
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<m; j++) {
//			if (mp[i][j]=='O'&&!vis[i][j]) {
//				mp[i][j]='X';
//			}
//		}
//	}
//	for (int i=0; i<n; i++) {
//		printf("%s\n",mp[i]);
//	}
//	return 0;
//}
