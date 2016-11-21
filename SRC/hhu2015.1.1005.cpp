//// http://acm.hdu.edu.cn/diy/contest_showproblem.php?pid=1005&cid=27735
//// http://acm.hdu.edu.cn/showproblem.php?pid=1054
//
//#include <iostream> 
//#include "stdio.h"
//#include <string>
//#include <algorithm>
//#include <fstream>
//#include <queue>
//#include <stdio.h>
//#include <stdlib.h>
//
//#define INF 100000
//
//using namespace std;
//
//struct Node {
//	vector<short> childs;
//};
//int iter(Node *& nds, int n, int head, bool father_put, int * table) {
//	int s = 0;
//	int s1 = 0, s2 = 0;
//	//table:since 0 not put since n put
//	if (father_put) {
//		//case put
//		if (table[n + head]<0) {
//			table[n + head] = 1;
//			for (int next_child = 0; next_child < nds[head].childs.size(); next_child++)
//				table[n + head] += iter(nds, n, nds[head].childs[next_child], true, table);
//		}
//		s1 = table[n + head];
//		//case not put
//		if (table[head]<0) {
//			table[head] = 0;
//			for (int next_child = 0; next_child < nds[head].childs.size(); next_child++)
//				table[head] += iter(nds, n, nds[head].childs[next_child], false, table);
//		}
//		s2 = table[head];
//		s += min(s1, s2);
//	}
//	else {//如果父元素没有卫兵,那当前元素必须要有
//		  //case put
//		if (table[n + head]<0)
//		{
//			table[n + head] = 1;
//			for (int next_child = 0; next_child < nds[head].childs.size(); next_child++)
//				table[n + head] += iter(nds, n, nds[head].childs[next_child], true, table);
//		}
//		s = table[n + head];
//	}
//	return s;
//}
//int main() {
//	int n, t, r, tree_head;
//	int nid;
//	char c;
//
//	//ifstream fin("1.txt");
//	//streambuf *cinbackup;  
//	//cinbackup= cin.rdbuf(fin.rdbuf()); 
//
//	while (cin >> n) {
//		Node * nds = new Node[n];
//		tree_head = -1;
//		for (int enum_nodes = 0; enum_nodes < n; enum_nodes++)
//		{
//			cin >> nid; cin >> c; cin >> c; //:(
//			if (tree_head == -1)tree_head = nid;
//			r = 0; cin >> r;
//			cin >> c; // )
//			for (int i = 0; i < r; i++)
//			{
//				cin >> t;
//				nds[nid].childs.push_back(t);
//			}
//		}
//		int * table = (int *)malloc(2 * n * sizeof(int));
//		memset(table, -1, 2 * n * sizeof(int));
//
//		t = iter(nds, n, tree_head, true, table);
//		cout << t << endl;
//
//		delete[] nds;
//		free(table);
//	}
//	//system("pause");
//}
//
//
//
////
////#include <iostream> 
////#include "stdio.h"
////#include <string>
////#include <algorithm>
////#include <fstream>
////#include <queue>
////#include <stdio.h>
////#include <stdlib.h>
////
////#define INF 100000
////
////using namespace std;
////
////struct Node{
////	short deep;
////	vector<short> childs;
////};
////
////int main(){
////	int n,t,r,tree_head;
////	int nid;
////	char c;
////
////	//ifstream fin("1.txt");
////	//streambuf *cinbackup;  
////	//cinbackup= cin.rdbuf(fin.rdbuf()); 
////
////	while(cin>>n){
////		Node * nds = new Node[n];
////		tree_head = -1;
////		for (int enum_nodes = 0; enum_nodes < n; enum_nodes++)
////		{
////			cin>>nid;cin>>c;cin>>c; //:(
////			if(tree_head==-1)tree_head = nid;
////			r=0;cin>>r;
////			cin>>c; // )
////			for (int i = 0; i < r; i++)
////			{
////				cin>>t;
////				nds[nid].childs.push_back(t);
////			}
////		}
////
////		queue<short> q;
////		short layer[1500];
////		memset(layer,0,sizeof(short)*1500);
////		q.push(tree_head);layer[0]=1;
////		int current_layer = 1;
////		while (!q.empty())
////		{
////			layer[current_layer] += nds[q.front()].childs.size();
////			t = q.front();
////			for (int i = 0; i < nds[t].childs.size(); i++)
////			{
////				nds[nds[t].childs[i]].deep = current_layer;
////				q.push(nds[t].childs[i]);
////			}
////			q.pop();
////			if (!q.empty() && nds[q.front()].deep != current_layer-1)
////			{
////				current_layer++;
////			}
////		}
////		t = 0;r = 0;
////		for (int i = 0; i < 1500; i++)
////		{
////			t += layer[i];
////			i++;
////		}
////		for (int i = 1; i < 1500; i++)
////		{
////			r += layer[i];
////			i++;
////		}
////		cout<<min(r,t)<<endl;
////		delete[] nds;
////	}
////	//system("pause");
////}
//
//
//
////#include <iostream> 
////#include "stdio.h"
////#include <string>
////#include <algorithm>
////#include <fstream>
////#include <queue>
////#include <stdio.h>
////#include <stdlib.h>
////
////#define INF 100000
////
////using namespace std;
////
////struct Node{
////	short deep;
////	vector<short> childs;
////};
////int iter(Node *& nds,int n,int head,bool father_put){
////	int s = 0;
////	int s1 = 0,s2 = 0;
////	if(father_put){
////		s1 = 1;
////		for (int next_child = 0; next_child < nds[head].childs.size(); next_child++)
////		{
////			s1 += iter(nds,n,nds[head].childs[next_child],true);
////		}
////		for (int next_child = 0; next_child < nds[head].childs.size(); next_child++)
////		{
////			s2 += iter(nds,n,nds[head].childs[next_child],false);
////		}
////		s += min(s1,s2);
////	}else{//如果父元素没有卫兵,那当前元素必须要有
////		s = 1;
////		for (int next_child = 0; next_child < nds[head].childs.size(); next_child++)
////		{
////			s += iter(nds,n,nds[head].childs[next_child],true);
////		}
////	}
////	return s;
////}
////int main(){
////	int n,t,r,tree_head;
////	int nid;
////	char c;
////
////	//ifstream fin("1.txt");
////	//streambuf *cinbackup;  
////	//cinbackup= cin.rdbuf(fin.rdbuf()); 
////
////	while(cin>>n){
////		Node * nds = new Node[n];
////		tree_head = -1;
////		for (int enum_nodes = 0; enum_nodes < n; enum_nodes++)
////		{
////			cin>>nid;cin>>c;cin>>c; //:(
////			if(tree_head==-1)tree_head = nid;
////			r=0;cin>>r;
////			cin>>c; // )
////			for (int i = 0; i < r; i++)
////			{
////				cin>>t;
////				nds[nid].childs.push_back(t);
////			}
////		}
////		t = iter(nds,n,tree_head,true);
////		r = iter(nds,n,tree_head,false);
////
////		cout<< min(r,t) <<endl;
////		delete[] nds;
////	}
////	//system("pause");
////}