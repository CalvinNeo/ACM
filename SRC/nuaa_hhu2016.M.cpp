//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//vector<ll> ans;
//map<ll,int> st[2];
//ll a[100010];
//
//int main()
//{
//	int n,m,t;
//	ll q,u,v;
//	scanf("%d%d%lld%lld%lld%d",&n,&m,&q,&u,&v,&t);
//	int pre=0,now=1;
//	st[now].clear();
//	for (int i=1; i<=n; i++) {
//		scanf("%lld",&a[i]);
//		st[now][a[i]]++;
//	}
//	for (int i=1; i<=m; i++) {
//		map<ll,int>::reverse_iterator it=st[now].rbegin();
//		ll x=it->first;
//		(it->second)--;
//		if (i%t==0) {
//			ans.push_back(x);
//		}
//		ll y=u*x/v;
//		st[pre].clear();
//		for (; it!=st[now].rend(); it++) {
//			if (it->second) st[pre][(it->first)+q]=it->second;
////			printf("%d ",it->first);
//		}
////		puts("");
//		st[pre][y]++;
//		st[pre][x-y]++;
//		swap(pre,now);
//	}
//	for (int i=0; i<ans.size(); i++) {
//		if (i<ans.size()-1) printf("%lld ",ans[i]);
//		else printf("%lld\n",ans[i]);
//	}
//	ans.clear();
//	int i=0;
//	for (map<ll,int>::reverse_iterator it=st[now].rbegin(); it!=st[now].rend(); it++) {
//		for (int j=0; j<(it->second); j++) {
//			i++;
//			if (i%t==0) {
//				ans.push_back(it->first);
//			}
//		}
//	}
//	for (int i=0; i<ans.size(); i++) {
//		if (i<ans.size()-1) printf("%lld ",ans[i]);
//		else printf("%lld\n",ans[i]);
//	}
//	return 0;
//}
