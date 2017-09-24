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
#define MAXN 50010
using namespace std;
#define LL long long
#define ULL unsigned long long
#define LD long double
typedef pair<int, int> pii;

double e[1010][1010];

double solve(int n, int s) {
	memset(e, 0, sizeof e);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= s; j++)
		{
			
		}
	}
	return e[n][s];
}

int main() {
	int n, s;
	while (~scanf("%d %d", &n, &s)) {
		double sol = solve(n, s);
		printf("%.4f\n", sol);
	}
	return 0;
}