//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int mds[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
//struct Date {
//	int yy,mm,dd;
//	Date(){}
//	Date(int a,int b,int c) {
//		yy=a;mm=b;dd=c;
//	}
//	bool operator <(const Date& b) {
//		if (yy<b.yy) return true;
//		if (yy>b.yy) return false;
//		if (mm<b.mm) return true;
//		if (mm>b.mm) return false;
//		return (dd<b.dd);
//	}
//	bool operator == (const Date& b) {
//		return (yy==b.yy&&mm==b.mm&&dd==b.dd);
//	}
//};
//
//bool leap(int yy)
//{
//	if (yy%100&&yy%4==0) return true;
//	return (yy%400==0);
//}
//
//bool ok(Date d,Date d1,Date d2)
//{
//	if (d.mm<1||d.mm>12) return false;
//	if (d.dd<1||d.dd>mds[d.mm]) return false;
//	if (d.mm==2&&!leap(d.yy)) {
//		if (d.dd>28) return false;
//	}
//	if (d<d1) return false;
//	if (d2<d) return false;
//	return true;
//}
//
//int main()
//{
//	int x,y;
//	scanf("%d",&x);
//	scanf("%d",&y);
//	Date d1(x/10000,(x%10000)/100,x%100);
//	Date d2(y/10000,(y%10000)/100,y%100);
//	int ans=0;
//	y=x/10000;
//	while (y<=d2.yy) {
//		int tmp=y/100;
//		int tmp2=y%100;
//		Date now(y,tmp2%10*10+tmp2/10,tmp%10*10+tmp/10);
//		ans+=ok(now,d1,d2);
//		y++;
//	}
//	printf("%d\n",ans);
//	return 0;
//}
