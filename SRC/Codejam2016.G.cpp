//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <functional>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//#include <numeric>
//
//#define INF 1111
//using namespace std;
//#define LL long long
//
//void nop() {
//	return;
//}
//
//int main() {
//#ifdef __ACM
//	ifstream fin("111.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int cas = 1;
//	int T;
//	cin >> T;
//	int person[INF];
//	char marked[INF];
//	while (T--) {
//		int N;
//		cin >> N;
//		memset(person, 0, sizeof(int) * INF);
//		memset(marked, 0, sizeof(char) * INF);
//		for (int i = 1; i <= N; i++)
//		{
//			cin >> person[i];
//		}
//		vector<int> allcir;
//		for (int cperson = 1; cperson <= N; cperson++)
//		{
//			vector<int> link;
//			link.push_back(cperson);
//			while (marked[cperson] < 2)
//			{
//				marked[cperson] += 1;
//				int newperson = person[cperson];
//				marked[newperson] += 1;
//				for (int j = 0; j < link.size() - 1; j++)
//				{
//					if (link[j] == newperson) {
//						allcir.push_back(link.size() + 1);
//						goto find_new_circle;
//					}
//				}
//				link.push_back(newperson);
//				continue;
//			find_new_circle:
//				break;
//			}
//		}
//		int __max = allcir[0];
//		for (int i = 1; i < allcir.size(); i++)
//		{
//			if (__max <= allcir[i]) {
//				__max = allcir[i];
//			}
//		}
//		cout << "Case #" << cas << ": " << __max << endl;
//		cas++;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//	return 0;
//}
//
