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
//int nums[20];
//LL dp[9][(1 << 4)];
//
//
//bool check_has4(int status) {
//	return (status & 1) == 1;
//}
//bool check_has62(int status) {
//	return (status & 2) == 2;
//}
//bool check_prev6(int status) {
//	return (status & 4) == 4;
//}
//void set_has4(int & status) {
//	status |= 1;
//}
//void set_has62(int & status) {
//	status |= 2;
//}
//void set_prev6(int & status) {
//	status |= 4;
//}
//void clear_prev6(int & status) {
//	if (check_prev6(status)) {
//		status -= 4;
//	}
//}
//bool check(int status) {
//	return check_has4(status) || check_has62(status);
//}
//bool test_begin = false;
//LL dfs(int pos, int status, bool flag) {
//	if (pos == -1) {
//		bool c = check(status);
//		if (c) {
//			// ²»¼ªÀû
//			return 0;
//		}
//		else {
//			return 1;
//		}
//	}
//	if (!flag && dp[pos][status] != -1) {
//		return dp[pos][status];
//	}
//	LL ans = 0;
//	int end = flag ? nums[pos] : 9;
//	for (int i = 0; i <= end; i++)
//	{
//		int newstatus = status & 3;
//		if (i == 2 && check_prev6(status))
//		{
//			set_has62(newstatus);
//			continue;
//		}
//		else if (i == 4)
//		{
//			set_has4(newstatus);
//			continue;
//		}
//		else if (i == 6)
//		{
//			set_prev6(newstatus);
//		}
//		bool newflag = flag && (i == end);
//		ans += dfs(pos - 1, newstatus, newflag);
//	}
//	if (!flag)
//	{
//		dp[pos][status] = ans;
//	}
//	return ans;
//}
//
//LL solve(int x){
//	memset(nums, 0, sizeof nums);
//	memset(dp, -1, sizeof dp);
//	int ppos = 0;
//	while (x != 0) {
//		nums[ppos++] = x % 10;
//		x /= 10;
//	}
//	LL ans = dfs(ppos - 1, 0, true);
//	return ans;
//}
//
//int main() {
//	int n, m;
//	//printf("%d\n", 0 | 4);
//	while (~scanf("%d %d", &n, &m)) {
//		if (n == 0 && m == 0)
//		{
//			return 0;
//		}
//		LL fr = solve(n - 1);
//		LL to = solve(m);
//		printf("%lld\n", to - fr);
//	}
//	return 0;
//}