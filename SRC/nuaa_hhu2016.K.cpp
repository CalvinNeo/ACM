//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N=5010;
//int a[N];
//
//int main()
//{
//	int n,m;
//	scanf("%d%d",&n,&m);
//	for (int i=1; i<=n; i++) {
//		scanf("%d",&a[i]);
//	}
//	sort(a+1,a+1+n);
//	for (int i=n; i; i--) {
//		if (i<n&&a[i]==a[i+1]) continue;
//		for (int j=i-1; j; j--) {
//			if (j<i-1&&a[j]==a[j+1]) continue;
//			if (a[i]+a[j]>m) continue;
//			for (int k=j-1; k; k--) {
//				if (k<j-1&&a[k]==a[k+1]) continue;
//				if (a[i]+a[j]+a[k]==m) {
//					printf("%d %d %d\n",a[i],a[j],a[k]);
//				}
//			}
//		}
//	}
//	return 0;
//}
