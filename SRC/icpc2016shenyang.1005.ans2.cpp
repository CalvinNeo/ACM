//// TLE
//
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//int n,m,S,ans,cnt;
//int a[105][105];
//vector<int> g[105];
//int s[1005];
//void dfs(int u){
//    if(cnt==S){
//        ans++;
//        return;
//    }
//    for(int i=0;i<g[u].size();i++){
//        int v=g[u][i];
//        int flag=0;
//        for(int j=1;j<=cnt;j++){
//            if(a[v][s[j]]==0){
//                flag=1;
//                break;
//            }
//        }
//        if(flag==0){
//            cnt++;
//            s[cnt]=v;
//            dfs(v);
//            cnt--;
//        }
//    }
//    return;
//}
//int main(){
//    int t; scanf("%d",&t);
//    while(t--){
//        scanf("%d%d%d",&n,&m,&S);
//        memset(a,0,sizeof(a));
//        for(int i=1;i<=n;i++)
//            g[i].clear();
//        ans=0; cnt=0;
//
//        for(int i=1;i<=m;i++){
//            int x,y;
//            scanf("%d%d",&x,&y);
//            a[x][y]=1;
//            a[y][x]=1;
//            if(x>y) swap(x,y);
//            g[x].push_back(y);
//        }
//        for(int i=1;i<=n;i++){
//            cnt=0;
//            s[++cnt]=i;
//            dfs(i);
//        }
//        printf("%d\n",ans);
//    }
//
//    return 0;
//}