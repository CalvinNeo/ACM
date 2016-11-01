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
//#define INF 0x3f3f3f3f
//#define MAXN 110
//using namespace std;
//#define LL long long
//
//int N, M, C, E;
//
//struct Character {
//	int index;
//	int HP;
//	int AT;
//	int MV;
//	int AD1;
//	int AD2;
//	int STx;
//	int STy;
//	int GR;
//	bool isd;
//};
//
//int G[MAXN][MAXN];
//int OC[MAXN][MAXN]; // -1没有被占领
//Character Cha[MAXN];
//char cmd[200];
//char dum1[200];
//char dum2[200];
//int gr = 0;
//int cha = 0;
//
//bool zeromv(int x, int y, int i) {
//	if (x - 1 >= 1 && OC[x - 1][y] != Cha[i].GR && OC[x - 1][y] != -1) {
//		return true;
//	}
//	if (x + 1 <= N && OC[x + 1][y] != Cha[i].GR && OC[x + 1][y] != -1) {
//		return true;
//	}
//	if (y - 1 >= 1 && OC[x][y - 1] != Cha[i].GR && OC[x][y - 1] != -1) {
//		return true;
//	}
//	if (y + 1 <= M && OC[x][y + 1] != Cha[i].GR && OC[x][y + 1] != -1) {
//		return true;
//	}
//	return false;
//}
//
//bool inrect(int x, int y, int x1, int y1, int x2, int y2) {
//	if (x <= max(x1, x2) && x >= min(x1, x2) && y <= max(y1, y2) && y >= min(y1, y2)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool isocc(int x, int y) {
//	return OC[x][y] != -1;
//}
//
//int maxn = -1;//剩下的最大体力 
//int dir[4][2] = { { 1,0 },{ 0,1 },{ 0,-1 },{ -1,0 } };
//bool vis[MAXN][MAXN];
//struct Node {
//	int x, y, mv;
//	Node(int x, int y, int mv) :x(x), y(y), mv(mv) {
//
//	}
//	bool operator< (const Node& A) const
//	{
//		return mv < A.mv;
//	}
//};
//priority_queue<Node> pq;
//
//bool bfs(int x, int y) {
//	// character to (x, y)
//	if (Cha[cha].STx == x && Cha[cha].STy == y) return true;
//	if (OC[x][y] != -1) return false;
//	while (!pq.empty()) {
//		pq.pop();
//	}
//	memset(vis, 0, sizeof vis);
//	pq.push(Node(Cha[cha].STx, Cha[cha].STy, Cha[cha].MV));
//	while (!pq.empty())
//	{
//		Node nd = pq.top(); pq.pop();
//		if (nd.x == x && nd.y == y)
//		{
//			// reached
//			if (nd.mv >= 0) {
//				Cha[cha].MV = nd.mv;
//				OC[Cha[cha].STx][Cha[cha].STy] = -1;
//				Cha[cha].STx = x;
//				Cha[cha].STy = y;
//				OC[x][y] = Cha[cha].GR;
//				return true;
//			}
//			else {
//				return false;
//			}
//		}
//		else {
//			// not reached destination
//			for (int i = 0; i < 4; i++) {
//				int dx = nd.x + dir[i][0];
//				int dy = nd.y + dir[i][1];
//				int dmv;
//				if (!vis[dx][dy] && !isocc(dx, dy) && (nd.mv - G[dx][dy] >= 0) && dx >= 1 && dx <= N && dy >= 1 && dy <= M) {
//					if (zeromv(dx, dy, cha)) {
//						dmv = 0;
//					}
//					else {
//						dmv = nd.mv - G[dx][dy];
//					}
//					pq.push(Node(dx, dy, dmv));
//					vis[dx][dy] = 1;
//				}
//			}
//		}
//	}
//	return false;
//}
//
//
//int manhat(int x1, int y1, int x2, int y2) {
//	return abs(x1 - x2) + abs(y1 - y2);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	while (scanf("%d", &N) != EOF) {
//		scanf("%d%d%d", &M, &C, &E);
//		memset(G, 0, sizeof G);
//		memset(Cha, 0, sizeof Cha);
//		memset(OC, -1, sizeof OC);
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= M; j++)
//			{
//				scanf("%d", &G[i][j]);
//				OC[i][j] = -1;
//			}
//		}
//		for (int i = 1; i <= C; i++)
//		{
//#define FF &Cha[i]
//			Cha[i].index = i;
//			scanf("%d %d %d %d %d %d %d %d", FF.HP, FF.AT, FF.MV, FF.AD1, FF.AD2, FF.STx, FF.STy, FF.GR);
//			Cha[i].isd = false;
//			OC[Cha[i].STx][Cha[i].STy] = Cha[i].GR;
//		}
//		for (int i = 0; i < E; i++)
//		{
//			scanf("%s", cmd);
//#define DOC(XX) (strcmp(cmd, XX) == 0)
//			if (DOC("Round")) {
//				scanf("%s %d", dum1, &gr);
//			}
//			else if (DOC("Action")) {
//				int id;
//				scanf("%s %s %d", dum1, dum2, &id);
//				cha = id;
//			}
//			else if (DOC("Move")) {
//				int x, y;
//				scanf("%s (%d,%d)", dum1, &x, &y);
//				// 剩下来的最大体力
//				bool ans = bfs(x, y);
//				if (!ans) {
//					printf("INVALID\n");
//				}
//				else {
//					printf("%d\n", Cha[cha].MV);
//				}
//			}
//			else if (DOC("Attack")) {
//				int id;
//				scanf("%d", &id);
//				int dis = manhat(Cha[id].STx, Cha[id].STy, Cha[cha].STx, Cha[cha].STy);
//				if (dis >= Cha[cha].AD1 && dis <= Cha[cha].AD2  && Cha[id].HP > Cha[cha].AT) {
//					Cha[id].HP -= Cha[cha].AT;
//					printf("%d\n", Cha[id].HP);
//				}
//				else {
//					printf("INVALID\n");
//				}
//			}
//			else if (DOC("Drive")) {
//				int id;
//				scanf("%s %d", dum1, &id);
//				int dis = manhat(Cha[id].STx, Cha[id].STy, Cha[cha].STx, Cha[cha].STy);
//				if (dis >= Cha[cha].AD1 && dis <= Cha[cha].AD2 && Cha[id].HP <= Cha[cha].AT) {
//					Cha[id].HP -= Cha[cha].AT;
//					printf("%d\n", Cha[id].HP);
//					OC[Cha[id].STx][Cha[id].STy] = -1;
//				}
//				else {
//					printf("INVALID\n");
//				}
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
