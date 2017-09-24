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

const int N = 100;

using namespace std;

int val[N],f[N]; 
int aabs(int x){
	return x < 0? (-x) : x;
}


bool sol(int num){
	memset(val, 0, sizeof val);
	memset(f, 0, sizeof f);
	int x = num;
    int i, j,  m, total = 0;  
    int n = 0; 
	while(x != 0){
		val[n] = x % 10;
		total += val[n];
		x /= 10;
		n++;
	}
	if(total % 2 == 1){
		return false;
	}
    m = total / 2;
    for(i=0; i<n; i++)  
    {  
        for(j=m; j>=val[i]; j--){
            f[j] = max(f[j], f[j-val[i]] + val[i]);  
		}
    }
    if(f[m] == total - f[m]){
    	return true;
	}else{
		return false;
	}
    
}

int main()  
{  
	int l, r;
	scanf("%d %d", &l, &r);
	int nn = 0;
	for(int i = l; i <= r; i++){
		if(sol(i)){
			nn++;
		}
	}
	printf("%d\n", nn);

//	for(int i = 1180000; i < 1200000; i++){
//		if(i % 1000 == 0){
//			printf("\n------%d-------\n", i);
//		}
//		printf(sol(i)?"Y":"N");
//	}
	
//	for(int i = 1185900; i < 1186000; i++){
//		if(i % 10 == 0){
//			printf("\n------%d-------\n", i);
//		}
//		printf(sol(i)?"Y":"N");
//	}
	
//	printf(sol(1185988)?"Y":"N");
    return 0;  
}  

