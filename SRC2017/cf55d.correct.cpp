///*
//* 题意：求区间[x , y]中beautiful number的个数，
//* a positive integer number is beautiful if and only
//* if it is divisible by each of its nonzero digits.
//分析：一个数能被它的所有非零数位整除，则能被它们的最小公倍数整除，而1到9的最小公倍数为2520，
//数位DP时我们只需保存前面那些位的最小公倍数就可进行状态转移，到边界时就把所有位的lcm求出了，
//为了判断这个数能否被它的所有数位整除，我们还需要这个数的值，显然要记录值是不可能的，其实我们只
//需记录它对2520的模即可，这样我们就可以设计出如下数位DP：dfs(pos,mod,lcm,f),pos为当前
//位，mod为前面那些位对2520的模，lcm为前面那些数位的最小公倍数，f标记前面那些位是否达到上限，
//这样一来dp数组就要开到19*2520*2520，明显超内存了，考虑到最小公倍数是离散的，1-2520中可能
//是最小公倍数的其实只有48个，经过离散化处理后，dp数组的最后一维可以降到48，这样就不会超了。
//*/
//
//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//const int MAXN = 25;
//const int MOD = 2520;//1~9的lcm为2520
//int index[MOD + 10];// index[i]表示i是MOD的第几个因数，最大为48
//long long dp[MAXN][MOD][48]; // 这里之所以是48而不取2520是防止MLE所以进行离散化
//int bit[MAXN]; // bit十进制地存放上界
//int gcd(int a, int b)
//{
//	if (b == 0)return a;
//	else return gcd(b, a%b);
//}
//int lcm(int a, int b)
//{
//	return a / gcd(a, b)*b;
//}
//
//void init()
//{
//	int num = 0;
//	for (int i = 1; i <= MOD; i++)
//		if (MOD%i == 0)
//			index[i] = num++;
//}
//long long dfs(int pos, int preSum, int preLcm, bool flag)
//{
//	if (pos == -1)
//		return preSum%preLcm == 0; // dfs终止条件，如果前面的数和模MOD能整除前面的LCM算一个完美数
//	if (!flag && dp[pos][preSum][index[preLcm]] != -1) {// 如果前面的位没有达到上限（后面可以随便取）
//		// 那么返回前pos位数和为preSum，且最小公倍数为preLcm，则查看是否能够直接返回记忆化存储的结果
//		return dp[pos][preSum][index[preLcm]];
//	}
//	long long ans = 0;
//	int end;
//	if (flag)
//	{
//		// 如果达到上限则end直到上限
//		end = bit[pos];
//	}
//	else {
//		end = 9;
//	}
//	for (int i = 0; i <= end; i++)
//	{
//		int nowSum = (preSum * 10 + i) % MOD;
//		int nowLcm = preLcm;
//		if (i) {
//			nowLcm = lcm(nowLcm, i);
//		}
//		bool newflag = flag && i == end; // 首先前缀要到头，然后当前也要到最大
//		ans += dfs(pos - 1, nowSum, nowLcm, newflag);
//	}
//	if (!flag) { // 只保存后面可以随便取的
//		dp[pos][preSum][index[preLcm]] = ans;
//	}
//	return ans;
//}
//long long calc(long long x)
//{
//	int pos = 0;
//	while (x)
//	{
//		bit[pos++] = x % 10;
//		x /= 10;
//	}
//	return dfs(pos - 1, 0, 1, 1);
//}
//int main()
//{
//	int T;
//	long long l, r;
//	init();
//	memset(dp, -1, sizeof(dp));
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%I64d%I64d", &l, &r);
//		printf("%I64d\n", calc(r) - calc(l - 1));
//	}
//	return 0;
//}