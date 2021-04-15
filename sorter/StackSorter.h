#ifndef _STACKSORTER_H_
#define _STACKSORTER_H_

#include "../template/SingleTonTemplate.h"
#include "SortDirection.h"
#include <stack>

using namespace std;

/**
 * スタックの中身をソートするクラス
 */
class StackSorter : public SingleTon<StackSorter> {
public:
	/**
	 * ソートする関数
	 * @param target ソート対象スタック
	 * @param direction ソート方向
	 * @return ソート済みのスタック
	 */
	template <typename T>
	stack<T> Sort(stack<T> target, int direction) {
		stack<T> result;
		while (!target.empty()) {

			//　１個の要素取得
			T element = target.top();
			target.pop();

			//　結果スタックがある場合、
			//　結果スタックのトップデータが要素より小さい場合。
			if (direction == SORT_DIRECTION_ASC) {
				while(!result.empty() && result.top() < element) {
					//　結果スタックのデータを、また対象スタックに戻す。
					//　結果スタックに大きい値をスタックに尾に入れる為。
					target.push(result.top());
					result.pop();
				}
			} else
			if (direction == SORT_DIRECTION_DESC) {
				while(!result.empty() && result.top() > element) {
					//　結果スタックのデータを、また対象スタックに戻す。
					//　結果スタックに大きい値をスタックに尾に入れる為。
					target.push(result.top());
					result.pop();
				}
			}

			//　取得要素を入れる。
			result.push(element);
		}

		return result;
	}
};

#endif
