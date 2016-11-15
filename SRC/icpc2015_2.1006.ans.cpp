//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//int main() {
//	// freopen("in","r",stdin);
//	int t;
//	string str, str0, str1;
//	scanf("%d", &t);
//	getline(cin, str);
//	int cnt = 0;
//	while (t--) {
//		getline(cin, str);
//		if (str == "") {
//			printf("Case #%d: %d\n", ++cnt, 0);
//			continue;
//		}
//		int n = str.length();
//		int i = 0;
//		while (str[i] == 'f' && i<n)
//			i++;
//		if (i == n) {
//			printf("Case #%d: %d\n", ++cnt, (n + 1) / 2);
//			continue;
//		}
//		str0 = str.substr(0, i);
//		str1 = str.substr(i);
//		str = str1 + str0;
//		int ans = str.find_last_of('c');
//		if (ans > n - 2) {
//			ans = -1;
//			printf("Case #%d: %d\n", ++cnt, ans);
//			continue;
//		}
//		ans = 0;
//		for (int i = 0; i<n; i++) {
//			if (str[i] == 'f') {
//				continue;
//			}
//			else if (str[i] == 'c' && str[i + 1] == 'f' && str[i + 2] == 'f') {
//				ans++;
//				continue;
//			}
//			else {
//				ans = -1;
//				break;
//			}
//		}
//		printf("Case #%d: %d\n", ++cnt, ans);
//	}
//}
