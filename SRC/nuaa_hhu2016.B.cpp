//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=100010;
//int fr[N];
//char nm[N][20];
//
//int main()
//{
//	int n,m;
//	scanf("%d%d",&n,&m);
//	for (int i=0;i<n;i++) {
//		scanf("%d",&fr[i]);
//		scanf("%s",nm[i]);
//	}
//	int p=0;
//	for (int i=1;i<=m;i++) {
//		int x,y;
//		scanf("%d%d",&x,&y);
//		if (x) {
//			if (fr[p]) {
//				p=(p-y+n)%n;
//			} else {
//				p=(p+y)%n;
//			}
//		} else {
//			if (fr[p]) {
//				p=(p+y)%n;
//			} else {
//				p=(p-y+n)%n;
//			}
//		}
//	}
//	printf("%s\n",nm[p]);
//	return 0;
//}
