//#include <cstdio> 
//#include <cmath>
//#include <vector>
//#include <algorithm>
//#include <typeinfo>
//#include <type_traits>
//using namespace std;
//
////template<typename T, int D>
////struct fornarray {
////	typedef typename vector<typename fornarray<T, D - 1>::type> type;
////};
////template<typename T>
////struct fornarray<T, 1> {
////	typedef typename vector<T> type;
////};
////template<typename T2, int I>
////class A {};            // primary template
////
////
////template<class T>
////class A<T*, 5> {}; // #3: partial specialization where T1 is int, I is 5,
////						//     and T2 is a pointer
//
//
//template<typename T>
//void func(std::vector<T> cont) {
//	puts("container");
//}
//template<typename T>
//void func(T non_cont) {
//	puts("not container");
//}
//
//
//typedef int for1array_size_t;
//template<typename T>
//struct for1array {
//	typedef T value_type;
//	typedef for1array_size_t size_type; // for1array index can be negative
//	typedef value_type * pointer;
//	typedef value_type & reference;
//	typedef const value_type * const_pointer;
//	typedef const value_type & const_reference;
//	typedef size_type difference_type;
//
//	size_type LBound() const {
//		return lb;
//	};
//	size_type UBound() const {
//		return ub;
//	};
//	size_type size() const {
//		return ub - lb;
//	}
//	int for1array_kind() {
//		return 1;
//	}
//
//	std::vector<T> c_vector() const {
//		return m_arr;
//	}
//
//	const T & const_get(size_type i) const {
//		if (i - lb >= (int)m_arr.size() || i - lb < 0) {
//			throw 0;
//		}
//		else {
//			return m_arr[i - lb];
//		}
//	}
//	T & get(size_type i) {
//		if (i - lb >= (int)m_arr.size() || i < lb) {
//			m_arr.resize(i - lb + 1);
//			ub = i + 1; // important
//			return m_arr[i - lb];
//			//throw 0;
//		}
//		else {
//			return m_arr[i - lb];
//		}
//	}
//	T & operator()(size_type i) {
//		return this->get(i);
//	}
//
//	T & operator[](size_type i) {
//		return get(i);
//	}
//
//
//	// deprecated
//	void clear() {
//		m_arr.clear();
//	}
//	void resize(size_type l, size_type u) {
//		this->lb = l;
//		this->ub = u;
//	}
//
//	for1array(size_type l, size_type u) : lb(l), ub(u) {
//		m_arr.resize(u - l);
//	};
//	for1array() : lb(0), ub(0) {
//
//	};
//	for1array(const for1array<T> & x) {
//		m_arr.clear();
//		(this->lb) = x.LBound();
//		(this->ub) = x.UBound();
//		for (size_type i = lb; i < ub; i++)
//		{
//			m_arr.push_back(x.const_get(i));
//		}
//	}
//
//protected:
//	std::vector<T> m_arr;
//	T * carr;
//	size_type lb, ub;
//
//};
//
////template<typename Cont, typename = void>
////	void for1array_init(Cont & farr) {
////		puts("no array");
////};
////
////template<typename Cont, std::void_t<typename Cont::value_type>>
////	void for1array_init(Cont & farr) {
////		puts("array");
////		for1array_init<typename Cont::value_type>(farr(1));
////};
//
//
////template<typename Cont>
////void for1array_init(Cont & farr, int deep) {
////	puts("no array");
////};
////
////template<typename Cont>
////void for1array_init(for1array<Cont> & farr, int deep) {
////	printf("array %d %s\n", deep, typeid(farr).name());
////	for1array_init(farr(1), deep + 1);
////};
//
////template< class, class = void >
////struct has_push_back : std::false_type
////{ };
////// specialized as has_member< T , void > or discarded (sfinae)
////template< class T >
////struct has_push_back< T, void_t< decltype(std::declval<T>().push_back(std::declval<int>())) > > : std::true_type
////{ };
//
////
////class A {
////public:
////	int push_back() {
////		return 0;
////	};
////	int push_back(int x) {
////		return 0;
////	};
////};
////
////class B {
////};
//
////static_assert(has_push_back< A >::value, "A");
////static_assert(has_push_back< B >::value, "B");
////static_assert(has_push_back< vector<int> >::value, "vector<int>");
//
////template<typename T>
////void promotion(T x, T y) {
////	puts("template");
////	vector<int> vec;
////}
////template<>
////void promotion(double x, double y) {
////	puts("template<>");
////}
////void promotion(double x, int y) {
////	puts("function");
////}
//
////template<class T> using try_assign = decltype(std::declval<T&>() = std::declval<T const&>());
////template<class, class = void> struct my_is_copy_assignable : false_type {};
////template<class T> struct my_is_copy_assignable<T, void_t<try_assign<T>>> : true_type {};
////
////template<typename Cont, typename = void>
////struct has_push_back : std::false_type {};
////
////template<typename Cont>
////struct has_push_back<Cont, std::void_t<decltype(Cont::push_back)>> : std::true_type {};
//
//template<typename T
//	, typename _Container_value_type
//	, typename _Iterator
//	, typename = void
//>
//	void _for1array_init_layer(
//		for1array<T> & farr, int deep
//		, const std::vector<for1array_size_t> & lower_bound
//		, const std::vector<for1array_size_t> & size
//		, const std::vector<for1array_size_t> & next_iter_delta
//		, _Iterator b, _Iterator e
//	)
//{
//	auto iter = b;
//	farr.resize(lower_bound[deep], lower_bound[deep] + size[deep]);
//	for (auto i = lower_bound[deep]; i < lower_bound[deep] + size[deep]; i++)
//	{
//		farr(i) = *iter;
//		if (i != lower_bound[deep] + size[deep] - 1) {
//			iter += next_iter_delta[deep];
//		}
//	}
//};
//
//template<typename T
//	, typename _Container_value_type
//	, typename _Iterator 
//	, typename = std::void_t< decltype(std::declval<_Container_value_type>().size() ) >
//>
//	void _for1array_init_layer(
//		for1array<_Container_value_type> & farr, int deep
//		, const std::vector<for1array_size_t> & lower_bound
//		, const std::vector<for1array_size_t> & size
//		, const std::vector<for1array_size_t> & next_iter_delta
//		, _Iterator b, _Iterator e
//	)
//{
//	auto iter = b;
//	farr.resize(lower_bound[deep], lower_bound[deep] + size[deep]);
//	for (auto i = lower_bound[deep]; i < lower_bound[deep] + size[deep]; i++)
//	{
//		_for1array_init_layer<T, typename _Container_value_type::value_type, _Iterator>(farr(i), deep + 1, lower_bound, size
//			, next_iter_delta, iter, iter + next_iter_delta[deep]);
//		if (i != lower_bound[deep] + size[deep] - 1) {
//			iter += next_iter_delta[deep];
//		}
//	}
//};
//
//template<typename T, typename _Container_value_type>
//void for1array_init(
//	for1array<_Container_value_type> & farr
//	, const std::vector<for1array_size_t> & lower_bound
//	, const std::vector<for1array_size_t> & size
//	, const std::initializer_list<T> & values)
//{
//	/* NOTE: assume the array is already allocated and no need to clear */
//	std::vector<for1array_size_t> next_iter_delta(size);
//	for1array_size_t s = 1;
//	std::transform(next_iter_delta.begin(), next_iter_delta.end(), next_iter_delta.begin(), [&s](for1array_size_t x) {for1array_size_t ans = s; s *= x; return ans; });
//	//typedef std::conditional<std::is_same<_Container_value_type, T>::value, T, _Container_value_type >::type _New_value_type;
//	_for1array_init_layer<T, _Container_value_type, std::initializer_list<T>::const_iterator >(farr, 0, lower_bound, size
//		, next_iter_delta, values.begin(), values.end());
//};
//
//
//
//
//int main() {
//	std::vector<int> cont;
//	int non_cont= 0;
//	//func(cont);
//	//func(non_cont); 
//	for1array<for1array<long long>> farr;
//	//static_assert(my_is_copy_assignable<int>::value, "fail");
//	//static_assert(has_push_back<vector<int>>::value, "vector");
//	//static_assert(has_push_back<int>::value, "int");
//	//for1array_init(farr, 0);
//	// for1array_init(non_cont, 0);
//	for1array_init(farr, { 1, 1 }, { 2, 2 }, {1, 2, 3, 5});
//	//for1array_getsize(farr);
//	//promotion(1, 1.0);
//	//promotion(1.0, 1.0);
//	return 0;
//}