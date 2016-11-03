//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//#define LL long long
//#define mod 530600414
//const int maxn = 201320;
//LL f[maxn];
//LL h[maxn];
//LL g[maxn];
//void init(){
//    memset(f,0,sizeof(f));
//    memset(h,0,sizeof(h));
//    memset(g,0,sizeof(g));
//    f[3] = 1;
//    f[4] = 1;
//    for(int i = 5 ; i <= maxn; i++){
//        f[i] = (f[i-1]+f[i-2])%mod;
//    }
//    h[3] = 1;
//    h[4] = 3;
//    for(int i = 5; i <= maxn; i++){
//        h[i] = (h[i-1]+h[i-2] + (f[i+1]*f[i-1])%mod) %mod;
//    }
//    for(int i = 5; i <= maxn; i++){
//        LL t1 = (f[i-2]*f[i+1]);
//        LL t2 = (t1-h[i-2])%mod;
//        LL t3 = (f[i-1]*t2)%mod;
//        g[i] = (g[i-1] + g[i-2] + (h[i-1]*f[i-2])%mod + t3 )%mod;
//    }
//
//}
//int main(){
//    init();
//    int t;
//    scanf("%d",&t);
//    int cnt = 0;
//    while(t--){
//        cnt++;
//        int n;
//        scanf("%d",&n);
//        printf("Case #%d: %lld\n",cnt,g[n]);
//    }
//}