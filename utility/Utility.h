#ifndef _UTILITY_H_
#define _UTILITY_H_

#include "../template/SingleTonTemplate.h"
#include <iostream>

using namespace std;

/**
 * Utility Class...
 */
class Utility : public SingleTon<Utility> {
public:
	/**
	 * 配列の長さを求める。
	 * @param 対象配列
	 * @return 配列の長さ
	 */
	template <typename T, size_t N>
	constexpr size_t Size(const T(&)[N]) { return N; }

	/**
	 * 動的配列の長さを求める。
	 * @param pArr 対象動的配列
	 * @return 動的配列の長さ
	 */
	template <typename T>
	int Size(T*& pArr)
	{
		int size = _msize(pArr) / sizeof(T);
		return size;
	}

	/**
	 * 引数の型の戻り値を、自動的に変換し、返す。
	 * @param val 対象値
	 * @return 変換済みの値
	 */
	template <typename T>
	T AutoCasting(T val)
	{
		return val;
	}
};

#endif
