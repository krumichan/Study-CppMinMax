#ifndef _LISTSORTER_H_
#define _LISTSORTER_H_

#include "../template/SingleTonTemplate.h"
#include "SortDirection.h"
#include <list>

/**
 * リストの中身をソートするクラス
 */
class ListSorter : public SingleTon<ListSorter> {
public:
	/**
	 * ソートする関数
	 * @param target ソート対象リスト
	 * @param direction 方向
	 * @return ソート済みのリスト
	 */
	template <typename T>
	list<T> Sort(list<T> target, int direction) {

		//　昇順でソート
		if (direction == SORT_DIRECTION_ASC) {
			target.sort([](const T& x, const T& y) -> bool { return (x) > (y); });

		//　降順でソート
		} else if (SORT_DIRECTION_DESC) {
			target.sort([](const T& x, const T& y) -> bool { return (x) < (y); });
		}
		return target;
	}
};

#endif
