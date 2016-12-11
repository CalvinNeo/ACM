//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=40010;
//struct P {
//	int x,id;
//} a[N];
//int ans[N][4];
//
//bool cmp(const P &a,const P &b)
//{
//	return a.x<b.x;
//}
//
//int bs(int l,int r,int left,int xb)
//{
//	int res=r+1;
//	while (l<=r) {
//		int m=(l+r)>>1;
//		if (left*3<(a[m].x-xb)) {
//			res=m;r=m-1;
//		} else {
//			l=m+1;
//		}
////		printf("RES: %d\n",res);
//	}
//	return res;
//}
//
//int bs2(int l,int r,int left,int xc)
//{
//	int res=r+1;
//	while (l<=r) {
//		int m=(l+r)>>1;
//		if (left<=2*(a[m].x-xc)) {
//			res=m;r=m-1;
//		} else {
//			l=m+1;
//		}
////		printf("RES: %d\n",res);
//		
//	}
//	return res;
//}
//
//int main()
//{
//	int n,m;
//	scanf("%d%d",&n,&m);
//	for (int i=1;i<=m;i++) {
//		scanf("%d",&a[i].x);
//		a[i].id=i;
//	}
//	sort(a+1,a+1+m,cmp);
//	for (int i=1;i<=m;i++) {
//		for (int j=i+1;j<=m;j++) {
//			if (a[j].x==a[i].x) continue;
//			int left=a[j].x-a[i].x;
//			int pc=bs(j+1,m,left,a[j].x);
////			if (a[i].x==1&&a[j].x==7) printf("PC: %d\n",pc);
//			for (int k=pc;k<=m;k++) {
//				if (a[k].x==a[j].x) continue;
//				int pd=bs2(k+1,m,left,a[k].x);
////				if (a[i].x==1&&a[j].x==7) printf("PD: %d\n",pd);
//				while (pd&&a[pd-1].x==a[pd].x) pd--;
//				for (int l=pd;l<=m;l++) {
//					if (a[l].x==a[k].x) continue;
//					if (a[j].x-a[i].x==2*(a[l].x-a[k].x)) {
//						ans[a[i].id][0]++;
//						ans[a[j].id][1]++;
//						ans[a[k].id][2]++;
//						ans[a[l].id][3]++;
//					}
//				}
//			}
//		}
//	}
//	for (int i=1;i<=m;i++) {
//		printf("%d %d %d %d\n",ans[i][0],ans[i][1],ans[i][2],ans[i][3]);
//	}
//	return 0;
//}
