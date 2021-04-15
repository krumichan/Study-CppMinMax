#ifndef _QUEUESORTER_H_
#define _QUEUESORTER_H_

#include "../template/SingleTonTemplate.h"
#include "SortDirection.h"
#include <queue>

using namespace std;

/**
 * キューの中身をソートするクラス
 */
class QueueSorter : public SingleTon<QueueSorter> {
public:

	/**
	 * ソートする関数
	 * @param target 対象キュー
	 * @param direction ソート方向
	 * @return ソート済みのキュー
	 */
	template <typename T>
	queue<T> Sort(queue<T> target, int direction) {

		//　ソートの結果を入れるキュー
		queue<T> result;

		//　降順
		if (direction == SORT_DIRECTION_DESC) {

			priority_queue<T> tmpQueue;

			//　priority_queueのディフォルトは降順なので、
			//　そのまま、入れる
			while (!target.empty()) {
				tmpQueue.push(target.front());
				target.pop();
			}

			//　ソート済みのデータを、
			//　結果キューに、また入れる。
			while (!tmpQueue.empty()) {
				result.push(tmpQueue.top());
				tmpQueue.pop();
			}

		//　昇順
		} else
		if (direction == SORT_DIRECTION_ASC) {

			//　降順の為のキューを生成
			priority_queue<T, vector<T>, greater<T>> tmpQueue;

			//　データをソートしながら、入れる
			while (!target.empty()) {
				tmpQueue.push(target.front());
				target.pop();
			}

			//　ソート済みのデータを、
			//　結果キューに、また入れる。
			while (!tmpQueue.empty()) {
				result.push(tmpQueue.top());
				tmpQueue.pop();
			}
		}

		return result;
	}
};

#endif
