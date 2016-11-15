//#include<iostream> 
//#include<fstream> 
//#include<iomanip> 
//#include<cstdio> 
//#include<cstring> 
//#include<algorithm> 
//#include<cstdlib> 
//#include<cmath> 
//#include<set> 
//#include<map> 
//#include<queue> 
//#include<stack> 
//#include<string> 
//#include<vector> 
//#include<sstream> 
//#include<ctime> 
//#include<cassert> 
//#define LL long long 
//#define eps 1e-8 
//#define inf 999999.0 
//#define zero(a) fabs(a)<eps 
//#define pi acos(-1.0) 
//using namespace std;
//double X, Y, R;
//int n;
//struct Point {
//	double x, y;
//	Point() {}
//	Point(double tx, double ty) { x = tx; y = ty; }
//	bool check() {
//		if (x + eps>0 && y + eps>0 && x<eps + X&&y<eps + Y) return true;
//		return false;
//	}
//}p[1005], central;
////求三点的外接圆圆心 
//Point Circumcenter(Point a, Point b, Point c) {
//	double a1 = b.x - a.x, b1 = b.y - a.y, c1 = (a1*a1 + b1*b1) / 2;
//	double a2 = c.x - a.x, b2 = c.y - a.y, c2 = (a2*a2 + b2*b2) / 2;
//	double d = a1 * b2 - a2 * b1;
//	return Point(a.x + (c1*b2 - c2*b1) / d, a.y + (a1*c2 - a2*c1) / d);
//}
//double dist(Point p1, Point p2) {
//	return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
//}
//void Min_cover_circle(int h,int m) {
//	//将点随机化 
//	random_shuffle(p, p + n);
//	central = p[h]; R = 0;
//	for (int i = 0; i<m; i++) {
//		if (i == h) continue;
//		if (dist(central, p[i]) + eps>R) {
//			central = p[i]; R = 0;
//			for (int j = 0; j<i; j++)
//				if (dist(central, p[j]) + eps>R) {
//					central.x = (p[i].x + p[j].x) / 2;
//					central.y = (p[i].y + p[j].y) / 2;
//					R = dist(central, p[j]);
//					for (int k = 0; k<j; k++)
//						if (dist(central, p[k]) + eps>R) {
//							//3点确定圆 
//							central = Circumcenter(p[i], p[j], p[k]);
//							R = dist(central, p[k]);
//						}
//				}
//		}
//	}
//}
//
//void docase(int caseid) {
//	int M = 0, N = 0,preR = 0;
//	scanf("%d", &M);
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%lf", &p[i].x);
//		scanf("%lf", &p[i].y);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		Min_cover_circle(i,M);
//		if (preR > R)
//		{
//			R = preR;
//		}
//	}
//	if (R == 0)
//	{
//		printf("-1\n");
//	}
//	else {
//		printf("%d\n", R);
//	}
//
//}
//int main() {
//	int C;
//#ifdef __ACM
//	freopen("1.txt", "r+", stdin);
//#endif
//	scanf("%d", &C);
//	for (int i = 0; i < C; i++) {
//		docase(i + 1);
//	}
//#ifdef __ACM
//	scanf("%d", &C);
//#endif
//}