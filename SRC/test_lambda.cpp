//#include <algorithm>
//#include <utility>
//#include <vector>
//#include <numeric>
//
//template <typename IT, typename F, typename OT = IT>
//auto reducef(const IT& input, F func)
//-> decltype(func(std::declval<typename IT::value_type>(),
//	std::declval<typename IT::value_type>()))
//{
//	decltype(func(std::declval<typename IT::value_type>(),
//		std::declval<typename IT::value_type>())) result{};
//	return std::accumulate(input.begin(), input.end(), result, func);
//}
//
//int main()
//{
//	std::vector<int> values;
//	reducef(values, [](int a, int b) { return a + b; });
//}