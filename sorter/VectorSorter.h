#ifndef _VECTORSORTER_H_
#define _VECTORSORTER_H_

#include "../template/SingleTonTemplate.h"
#include "SortDirection.h"
#include <vector>

using namespace std;

/**
 * ベクターの中身をソートするクラス
 */
class VectorSorter : public SingleTon<VectorSorter> {
public:
	/**
	 * ソートする関数
	 * @param target　ソート対象ベクター
	 * @param direction　方向
	 * @return　ソート済みのベクター
	 */
	template <typename T>
	vector<T> Sort(vector<T> target, int direction) {

		//　昇順ソート
		if (direction == SORT_DIRECTION_ASC) {
			sort(
				target.begin()
				,target.end()
				,[](const T& x, const T& y) -> bool { return (x) > (y); }
				);

		//　降順ソート
		} else if (direction == SORT_DIRECTION_DESC) {
			sort(
				target.begin()
				,target.end()
				,[](const T& x, const T& y) -> bool { return (x) < (y); }
				);
		}

		return target;
	}
};

#endif
