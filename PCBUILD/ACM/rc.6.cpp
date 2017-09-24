//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <string>
//#include <cstring>
//#include <queue>
//#include <functional>
////#include <boost/numeric/ublas/matrix.hpp>
////#include <boost/numeric/ublas/vector.hpp>
////#include <boost/numeric/ublas/io.hpp>
//
//const double eps = 1e-5;
//using namespace std;
//
//double gradient_descent(std::function<double(double)> f, std::function<double(double)> df, double x, int itertimes) {
//	double alpha = 0.5;
//	double y, dy;
//	while (itertimes--)
//	{
//		y = f(x);
//		dy = df(x);
//		x = x - alpha * dy;
//	}
//	return y;
//}
//
//int main() {
//	double ans = gradient_descent([](double x) {return x * x + 2 * x; }, [](double x) {return 2 * x + 2; }, 1.0, 100);
//	cout << ans << endl;
//	system("pause");
//}