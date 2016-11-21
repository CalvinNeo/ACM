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
//
//#define INF 0x3f3f3f3f
//#define BUYAOMOHA 505
//using namespace std;
//#define LL long long
//
//
//template<class T>
//struct wrapper {
//	T & operator= (const T & newv) {
//		cout << "operator=" << endl;
//		return value;
//	}
//	operator T() const {
//		cout << "operator T" << endl;
//		return value;
//	}
//
//	wrapper(T & newv) {
//		cout << "construct from T &" << endl;
//	}
//	wrapper(const T & newv) {
//		cout << "construct from const T &" << endl;
//	}
//	wrapper(const wrapper & d) {
//		cout << "construct from container" << endl;
//	}
//private:
//	T value;
//};
//
//template<class T>
//struct dirty {
//	T & operator= (const T & newv) {
//		// 赋值是赋值
//		changed = true;
//		value = newv;
//		return value;
//	}
//	operator T() const {
//		return value;
//	}
//	dirty(const T & newv) {
//		// 初始化是初始化
//		changed = false;
//		value = newv;
//	}
//	dirty(const dirty & d) {
//		// 复制构造函数
//		// 初始化是初始化
//		changed = false;
//		changed = d.isdirty();
//		value = d;
//	}
//	bool isdirty() const {
//		return changed;
//	}
//	T get() {
//		return value;
//	}
//	const T & const_get() const {
//		return value;
//	}
//private:
//	T value;
//	bool changed = false;
//};
//
//void test_default(dirty<bool> db = false) {
//	cout << db.isdirty() << endl;
//}
//
//template <class T>
//struct foroptional
//{
//	operator T() const {
//		return value;
//	}
//
//	T & operator= (const T & newv) {
//		dirty = true;
//		value = newv;
//		return value;
//	}
//	foroptional(const T & newv) {
//		dirty = true;
//		value = newv;
//	}
//	foroptional(T & newv) {
//		dirty = true;
//		value = newv;
//	}
//	foroptional(const foroptional<T> & newv) {
//		dirty = true;
//		value = newv.const_get();
//	}
//	foroptional(foroptional<T> & newv) {
//		dirty = true;
//		value = newv.get();
//	}
//	foroptional() {
//		dirty = false;
//	}
//	bool inited() const {
//		return dirty;
//	}
//	T get() {
//		return value;
//	}
//	const T & const_get() const {
//		return value;
//	}
//private:
//	T value;
//	bool dirty = false;
//};
//
//void test_optional(foroptional<bool> db) {
//	cout << db.inited() << endl;
//}
//
//int main() {
//	foroptional<bool> db = false;
//	test_optional(foroptional<bool>()); // should be 0
//	test_optional(true); // should be 1
//
//	//dirty<bool> db = false;
//	//cout << db.isdirty() << endl;
//	//test_default(db);
//	//db = true;
//	//cout << db.isdirty() << endl;
//	//test_default(db);
//
//	//wrapper<bool> reference = false;
//	//wrapper<bool> copied(reference);
//	//reference = true;
//	//cout << "---" << endl;
//	//wrapper<bool> constant(reference);
//	//cout << "---" << endl;
//	//bool vv = true;
//	//bool & kk = vv;
//	//wrapper<bool> kkk(kk);
//	system("pause");
//}