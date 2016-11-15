//#include<iostream> 
//#include<fstream> 
//#include<iomanip> 
//#include<cstdio> 
//#include<cstring> 
//#include<algorithm> 
//#include<cstdlib> 
//#include<cmath> 
//#include<set> 
//#include<map> 
//#include<queue> 
//#include<stack> 
//#include<string> 
//#include<vector> 
//#include<sstream> 
//#include<ctime> 
//#include<cassert> 
//
//using namespace std;
//
//struct Link {
//	Link * prev;
//	Link * rear;
//	char data;
//	Link(char c) {
//		prev = 0;
//		rear = 0;
//		data = c;
//	}
//};
//
//Link* insert(Link * p,char c) {
//	Link * prev_next = p->rear;
//	Link * newl = new Link(c);
//
//	p->rear = newl;
//	
//	newl->prev = p;
//	newl->rear = prev_next;
//
//	if (prev_next != 0)
//	{
//		prev_next->prev = newl;
//	}
//
//	return newl;
//}
//void del(Link * p) {
//	Link * prev_next = p->rear;
//
//	p->prev->rear = p->rear;
//	if (p->rear != 0)
//	{
//		p->rear->prev = p->prev;
//	}
//
//	delete p;
//}
//void print(Link * p) {
//	while (p != 0)
//	{
//		std::cout << p->data << " ";
//		p = p->rear;
//	}
//	std::cout <<endl;
//}
//int main() {
//	Link * head = new Link('a');
//	Link * b = insert(head, 'b');
//	insert(head, 'c');
//	Link * d = insert(head, 'd');
//	print(head);
//	del(d);
//	print(head);
//	del(b);
//	print(head);
//
//	system("pause");
//
//}