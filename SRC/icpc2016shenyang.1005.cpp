// http://acm.hdu.edu.cn/showproblem.php?pid=5952

#include <iostream> 
#include <fstream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>
#include <functional>
#include "stdlib.h" 
#include "time.h"
#include <set>
#include <map>
#include <numeric>
#include <cctype>
#include <cmath>

#define INF 0x3f3f3f3f
#define MAXN 110
#define MOD 1000000000
using namespace std;
#define LL long long
#define ULL unsigned long long
#define LD long double
typedef pair<int, int> pii;

int T;
int n, m, s;

vector<int> mp[MAXN];
bool can[MAXN];

int main() {
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d%d", &n, &m, &s);
		memset(can, 0, sizeof can);
		for (int i = 0; i < m; i++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			mp[u].push_back(v);
			mp[v].push_back(u);
		}
		for (int i = 1; i <= n; i++)
		{
			if (mp[i].size() >= s) {
				can[i] = true;
			}
		}
	}
	return 0;
}