//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//#define lson o<<1,l,m
//#define rson o<<1|1,m+1,r
//const int N=100005;
//const int MAX=100000;
//int t[N],k[N];
//int a[N<<2],b[N<<2];
//vector<int> x[N];
//
//void push_up(int o)
//{
//	a[o]=a[o<<1]+a[o<<1|1];
//	b[o]=b[o<<1]+b[o<<1|1];
//}
//
//void adj(int o,int l,int r,int x,int d)
//{
//	if (l==r) {
//		b[o]+=d;
//		if (b[o]==0&&a[o]) {
//			a[o]=0;
//		}
//		if (b[o]&&a[o]==0) {
//			a[o]=1;
//		}
//		return;
//	}
//	int m=(l+r)>>1;
//	if (x<=m) adj(lson,x,d);
//	else adj(rson,x,d);
//	push_up(o);
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int pre=1;
//	for (int i=1;i<=n;i++) {
//		scanf("%d%d",&t[i],&k[i]);
//		for (int j=0;j<k[i];j++) {
//			int y;
//			scanf("%d",&y);
//			adj(1,1,MAX,y,1);
//			x[i].push_back(y);
//		}
//		while (t[pre]<=t[i]-86400) {
//			for (int j=0;j<k[pre];j++) {
//				adj(1,1,MAX,x[pre][j],-1);
//			}
//			pre++;
//		}
//		printf("%d\n",a[1]);
//	}
//	return 0;
//}
