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
//#include <bitset>
//using namespace std;
//
//const int N = 1e4 + 7, P = 1e8 + 7;
//
//char s[N];
//int num[N], dp[N], t, ans, n;
//
//int main()
//{
//	scanf("%d", &t);
//	while (t--)
//	{
//		scanf("%s", s + 1), ans = 0;
//		n = strlen(s + 1);
//		for (int i = 1; i <= n; i++) {
//			num[i] = s[i] - '0';
//		}
//		for (int i = 0; i <= num[1]; i++)
//		{
//			// ĳһ���ܹ��м����ף�ע����ֻ��1/3��
//			dp[1] = i;
//			if (i > 2) {
//				break;
//			}
//			int j;
//			for (j = 2; j <= n; j++)
//			{
//				// num[j]��ѡ����
//				int now = num[j - 1] - dp[j - 1] - dp[j - 2];
//				if (now > 2 || now < 0) {
//					// �Ƿ����
//					break;
//				}
//				// ��ʱ�������е����������ȷ����
//				dp[j] = now;
//			}
//			if (j <= n || dp[n - 1] + dp[n] != num[n]) {
//				// ���n�Ƿ�Ϸ�
//				continue;
//			}
//			int an = 1;
//			for (int j = 1; j <= n; j++) {
//				// ����ÿһ�У����ֻ��һ���ף���ô���Է���1����3
//				if (dp[j] == 1) {
//					an *= 2;
//					an %= P;
//				}
//			}
//			ans += an;
//			ans %= P;
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}