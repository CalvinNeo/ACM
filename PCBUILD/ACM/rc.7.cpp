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
//#define MAXN 3500
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//std::string code;
//
//char gc(FILE * f) {
//	int ch; ch = getchar();
//	if (ch == EOF)
//	{
//		return 0;
//	}
//	else {
//		return ch;
//	}
//	return ch;
//}
//
//void print() {
//	cout << code << endl;
//}
//
//int main() {
//	char fn[255];
//	//scanf("%s", fn);
//	//FILE* f = fopen(fn, "r+");
//	FILE * f = stdin;
//	char ch, ch2;
//	bool instr = false;
//	while (true) {
//		ch = gc(f);
//		if (ch == 0)
//		{
//			print();
//			break;
//		}
//		else if(ch == '/'){
//			ch2 = gc(f);
//			if (ch2 == '*')
//			{
//				while (gc(f) != '*')
//				{
//				}
//				ch = gc(f);
//				if (ch == 0) {
//					break;
//				}
//				else if (ch == '/')
//				{
//					break;
//				}
//				else {
//					code += '*';
//				}
//			}
//			else if (ch2 == '/') {
//				while (true)
//				{
//					ch = gc(f);
//					if (ch == 0) {
//						break;
//					}
//					else if (ch != '\n')
//					{
//						continue;
//					}
//				}
//			}
//			else if (ch == '\"') {
//				code += '\"';
//				while (true)
//				{
//					ch = gc(f);
//					if (ch == 0) {
//						break;
//					}
//					else if (ch == '\"')
//					{
//						break;
//					}
//					else {
//						code += ch;
//					}
//				}
//				code += '\"';
//			}
//			else if (ch == '\'') {
//				code += '\'';
//				while (true)
//				{
//					ch = gc(f);
//					if (ch == 0) {
//						break;
//					}
//					else if (ch != '\'')
//					{
//						break;
//					}
//					else {
//						code += ch;
//					}
//				}
//				code += '\'';
//			}
//			else if (ch == '\\') {
//				ch = gc(f);
//				if (ch == 't')
//				{
//					code += '\t';
//				}
//				else if (ch == 'n') {
//					code += '\n';
//				}
//				else if (ch == '\"')
//				{
//					code += '\"';
//				}
//				else if (ch == '\'') {
//					code += '\'';
//				}
//			}
//			else {
//				code += ch;
//				code += ch2;
//			}
//		}
//		else {
//			code += ch;
//		}
//	}
//	system("pause");
//}