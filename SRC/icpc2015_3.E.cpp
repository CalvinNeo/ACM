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
//#define ZERO (1e-14)
//#define ISZERO(x) (fabs(x)<=ZERO)
//#define M_PI 3.14159265358979323846
//#define INF 1005
//
//using namespace std;
//int n;
//struct Point {
//	double x, y;
//	Point() {}
//	Point(double tx, double ty) { x = tx; y = ty; }
//}p[INF];
//vector<double> angles;
//
//
//void docase(int ptscnt) {
//	for (int i = 0; i < ptscnt; i++)
//	{
//		scanf("%lf%lf", &p[i].x, &p[i].y);
//	}
//	double x0 = 0, y0 = 0, r = 0;
//	double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
//	scanf("%lf%lf%lf", &x0, &y0, &r);
//	for (int i = 0; i < ptscnt; i++)
//	{
//		x1 = p[i].x; y1 = p[i].y; 
//		if (i == ptscnt - 1) {
//			x2 = p[0].x; y2 = p[0].y;
//		}
//		else {
//			x2 = p[i + 1].x; y2 = p[i + 1].y;
//		}
//		double A = x1*x1 + x2*x2 + y1*y1 + y2*y2 - 2 * x1*x2 - 2 * y1*y2;
//		double B = 2 * (x0*x1 + x1*x2 + y0*y1 + y1*y2 - x0*x2 - y0*y2 - x1*x1 - y1*y1);
//		double C = x0*x0 + x1*x1 + y0*y0 + y1*y1 - 2 * x0*x1 - 2 * y0*y1 - r*r;
//		double delta = B * B - 4 * A * C;
//		double ppx1, ppy1,ppx2,ppy2;
//
//		if (delta < 0)//无交点
//			continue;
//		double t1, t2;
//		if (ISZERO(delta))//相切,认为无交点
//		{
//			//t1==t2
//			t1 = (-B - sqrt(delta)) / (2.0*A);
//			t2 = (-B + sqrt(delta)) / (2.0*A);
//			//continue;
//		}
//		else {
//			t1 = (-B - sqrt(delta)) / (2.0*A);
//			t2 = (-B + sqrt(delta)) / (2.0*A);
//		}
//
//		if (t1 >= 0 && t1 <= 1) {
//			double x = x1 + (x2 - x1)*t1, y = y1 + (y2 - y1)*t1;
//			double angle = acos((x - x0) / r);
//			if (y < y0) angle = 2 * M_PI - angle;
//			if ((x <= x1 && x >= x2 && x1 > x2) || (x <= x2 && x >= x1 && x1 < x2))
//			{
//				cout << "t1 " << x << " " << y << " " << angle << " " << x1 << " " << x2 << " "<<endl;
//				angles.push_back(angle);
//			}
//		}
//		if (t2 >= 0 && t2 <= 1) {
//			double x = x1 + (x2 - x1)*t2, y = y1 + (y2 - y1)*t2;
//			double angle = acos((x - x0) / r);
//			if (y < y0) angle = 2 * M_PI - angle;
//			if ((x <= x1 && x >= x2 && x1 > x2) || (x <= x2 && x >= x1 && x1 < x2))
//			{
//				cout << "t2 " << x << " " << y << " " << angle << " " << x1 << " " << x2 << " " << endl;
//				angles.push_back(angle);
//			}
//		}
//	}
//	cout << "angle size " << angles.size() << endl;
//	for (size_t i = 0; i < angles.size(); i++)
//	{
//		cout << "angle " << angles[i] << endl;
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//freopen("1.txt", "r+", stdin);
//#endif
//	int C;
//	scanf("%d", &C);
//	if (C == 0)
//	{
//		return 0;
//	}
//	else {
//		docase(C);
//	}
//#ifdef __ACM
//	scanf("%d", &C);
//#endif
//}