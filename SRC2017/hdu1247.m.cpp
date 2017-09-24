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
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAXN 50010
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//bool flag[MAXN];
//int child[MAXN][26];
//char buf[MAXN][26];
//int tot;
//
//void clear() {
//	memset(flag, 0, sizeof flag);
//	memset(child, 0, sizeof child);
//	memset(buf, 0, sizeof buf);
//	tot = 0;
//}
//
//void insert(const char * s) {
//	int cur = 0;
//	for (const char * p = s; *p != 0; p++)
//	{
//		if (child[cur][*p - 'a'] == 0) {
//			child[cur][*p - 'a'] = ++tot;
//		}
//		cur = child[cur][*p - 'a'];
//	}
//	flag[cur] = true;
//}
//bool query(const char * s, int cur, int op) {
//	int i = 0, j;
//	while (s[i])
//	{
//		j = s[i++] - 'a';
//		if (child[cur][j] == 0)
//			return false;
//		cur = child[cur][j];
//		if (!op && flag[cur] && s[i])//前缀是一个单词  
//		{
//			if (query(s + i, 0, 1))
//				return true; //查询后缀是否是一个单词  
//		}
//	}
//	return op ? flag[cur] : op;
//}
//
//
//int main() {
//	int n = 0;
//	clear();
//	while (~scanf("%s", buf[n])) {
//		insert(buf[n]);
//		n++;
//	}
//	for (int i = 0; i < n; ++i)
//		if (query(buf[i], 0, 0)) puts(buf[i]);
//#ifdef __ACM
//	system("pause");
//#endif
//}