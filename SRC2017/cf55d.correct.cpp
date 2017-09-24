///*
//* ���⣺������[x , y]��beautiful number�ĸ�����
//* a positive integer number is beautiful if and only
//* if it is divisible by each of its nonzero digits.
//������һ�����ܱ��������з�����λ���������ܱ����ǵ���С��������������1��9����С������Ϊ2520��
//��λDPʱ����ֻ�豣��ǰ����Щλ����С�������Ϳɽ���״̬ת�ƣ����߽�ʱ�Ͱ�����λ��lcm����ˣ�
//Ϊ���ж�������ܷ�����������λ���������ǻ���Ҫ�������ֵ����ȻҪ��¼ֵ�ǲ����ܵģ���ʵ����ֻ
//���¼����2520��ģ���ɣ��������ǾͿ�����Ƴ�������λDP��dfs(pos,mod,lcm,f),posΪ��ǰ
//λ��modΪǰ����Щλ��2520��ģ��lcmΪǰ����Щ��λ����С��������f���ǰ����Щλ�Ƿ�ﵽ���ޣ�
//����һ��dp�����Ҫ����19*2520*2520�����Գ��ڴ��ˣ����ǵ���С����������ɢ�ģ�1-2520�п���
//����С����������ʵֻ��48����������ɢ�������dp��������һά���Խ���48�������Ͳ��ᳬ�ˡ�
//*/
//
//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//const int MAXN = 25;
//const int MOD = 2520;//1~9��lcmΪ2520
//int index[MOD + 10];// index[i]��ʾi��MOD�ĵڼ������������Ϊ48
//long long dp[MAXN][MOD][48]; // ����֮������48����ȡ2520�Ƿ�ֹMLE���Խ�����ɢ��
//int bit[MAXN]; // bitʮ���Ƶش���Ͻ�
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
//		return preSum%preLcm == 0; // dfs��ֹ���������ǰ�������ģMOD������ǰ���LCM��һ��������
//	if (!flag && dp[pos][preSum][index[preLcm]] != -1) {// ���ǰ���λû�дﵽ���ޣ�����������ȡ��
//		// ��ô����ǰposλ����ΪpreSum������С������ΪpreLcm����鿴�Ƿ��ܹ�ֱ�ӷ��ؼ��仯�洢�Ľ��
//		return dp[pos][preSum][index[preLcm]];
//	}
//	long long ans = 0;
//	int end;
//	if (flag)
//	{
//		// ����ﵽ������endֱ������
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
//		bool newflag = flag && i == end; // ����ǰ׺Ҫ��ͷ��Ȼ��ǰҲҪ�����
//		ans += dfs(pos - 1, nowSum, nowLcm, newflag);
//	}
//	if (!flag) { // ֻ�������������ȡ��
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