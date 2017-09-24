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
////op�����β�ѯ�ǲ�ѯ��׺���ǲ�ѯ����  
//bool searchTrie(Trie *r, char s[], int op)
//{
//	int i = 0, j;
//	while (s[i])
//	{
//		j = s[i++] - 'a';
//		if (r->chi[j] == NULL)
//			return false;
//		r = r->chi[j];
//		if (!op && r->isEnd && s[i])//ǰ׺��һ������  
//		{
//			if (searchTrie(root, s + i, 1))
//				return true; //��ѯ��׺�Ƿ���һ������  
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