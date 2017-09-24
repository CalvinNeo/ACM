//#include <cstdio>  
//#include <cstring>  
//using namespace std;
//const int N = 50005;
//int n;
//char ss[N][20];
//
//struct Trie
//{
//	Trie *chi[26];
//	bool isEnd;
//	Trie()
//	{
//		isEnd = false;
//		memset(chi, NULL, sizeof(chi));
//	}
//}*root;
//
//void insertTrie(Trie *r, char s[])
//{
//	int i = 0, j;
//	while (s[i])
//	{
//		j = s[i++] - 'a';
//		if (r->chi[j] == NULL)
//			r->chi[j] = new Trie();
//		r = r->chi[j];
//	}
//	r->isEnd = true;
//}
//
////op标记这次查询是查询后缀还是查询整个  
//bool searchTrie(Trie *r, char s[], int op)
//{
//	int i = 0, j;
//	while (s[i])
//	{
//		j = s[i++] - 'a';
//		if (r->chi[j] == NULL)
//			return false;
//		r = r->chi[j];
//		if (!op && r->isEnd && s[i])//前缀是一个单词  
//		{
//			if (searchTrie(root, s + i, 1))
//				return true; //查询后缀是否是一个单词  
//		}
//	}
//	return op ? r->isEnd : op;
//}
//
//
//
//int main()
//{
//	int m = 0;
//	root = new Trie();
//	while (~scanf("%s", ss[m]))
//		insertTrie(root, ss[m++]);
//
//	for (int i = 0; i < m; ++i)
//		if (searchTrie(root, ss[i], 0)) puts(ss[i]);
//
//	return 0;
//}