//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//template <typename T>
//struct forarray {
//	int LBound() { return 0; }
//	const char * get_name() { return 0; };
//};
//template <typename T>
//struct not_forarray {
//	int LXound() { return 0; }
//	const char * get_name() { return 0; };
//};
//
//
//template<typename T, int (T::*)()>
//struct func_matcher;
//template <typename T>
//using for1array_matcher = func_matcher<T, &T::LBound>*;
//
//
//struct is_forarray
//{
//	template<typename T>
//	static bool test(int x, for1array_matcher<T>)
//	{
//		return true;
//	}
//
//	template<typename T>
//	static bool test(int x, ...)
//	{
//		return false;
//	}
//};
//
//int main() {
//	cout << is_forarray::test<not_forarray<int>>(1, 0) << endl;
//	cout << is_forarray::test<int>(1, 0) << endl;
//
//	system("pause");
//	return 0;
//}
//
////template <typename T>
////struct forarray
////{
////	int get_name() {}
////};
////
////struct module_bad
////{
////};
////
////struct is_forarray
////{
////	template<typename T, int (T::*)()>
////	struct func_matcher;
////
////public:
////	template<typename T>
////	static bool test(func_matcher<T, &T::get_name>*)
////	{
////		return true;
////	}
////
////	template<typename T>
////	static bool test(...)
////	{
////		return false;
////	}
////};
////
////int main()
////{
////	bool b_ret = false;
////	cout << is_forarray::test<forarray<int>>(NULL) << endl;
////	cout << is_forarray::test<module_bad>(NULL) << endl;
////	system("pause");
////	return 0;
////}