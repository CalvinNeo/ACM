//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=1000010;
//int a[N],st[3];
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//		int ans=0;
//		for (int i=1;i<=n;i++) {
//			scanf("%d",&a[i]);
//			ans^=a[i];
//		}
//		int diff=ans&(-ans);
//		int p=0,q=0;
//		for (int i=1;i<=n;i++) {
//			if (diff&a[i]) {
//				p^=a[i];
//			} else {
//				q^=a[i];
//			}
//		}
//		printf("%d %d\n",min(p,q),max(p,q));
//	return 0;
//}
