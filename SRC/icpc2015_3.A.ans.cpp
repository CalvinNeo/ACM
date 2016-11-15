//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//struct Node {
//	double x, y;
//};
//Node node[101];
//double dist(Node n1, Node n2) {
//	return sqrt((n1.x - n2.x)*(n1.x - n2.x) + (n1.y - n2.y)*(n1.y - n2.y));
//}
//double nton[101][101];
//
//int main() {
//	// freopen("in","r",stdin);
//	int t;
//	scanf("%d", &t);
//	int m, n;
//	while (t--) {
//		scanf("%d%d", &m, &n);
//		for (int i = 0; i<m; i++) {
//			scanf("%lf%lf", &node[i].x, &node[i].y);
//		}
//		for (int i = 0; i<m; i++)
//			for (int j = i; j<m; j++) {
//				nton[i][j] = nton[j][i] = dist(node[i], node[j]);
//			}
//		// for(int i=0;i<m;i++){
//		// 	for(int j=0;j<m;j++){
//		// 		cout<<nton[i][j]<<" ";
//		// 	}
//		// 	cout<<endl;
//		// }		
//		if (n > m) {
//			printf("%d\n", -1);
//			continue;
//		}
//		int radio = -1;
//		int min_radio = 9999999;
//		for (int i = 0; i<m; i++) {
//			sort(nton[i], nton[i] + m);
//			radio = (int)(nton[i][n - 1]) + 1;
//			double tmp = radio * 1.0;
//			if ((n < m)) {
//				if (!(nton[i][n] > tmp))
//					radio = -1;
//			}
//			if (radio != -1) {
//				min_radio = radio<min_radio ? radio : min_radio;
//			}
//		}
//		if (min_radio == 9999999)
//			min_radio = -1;
//		printf("%d\n", min_radio);
//	}
//}