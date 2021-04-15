#ifndef _STACKSUPPORTER_H_
#define _STACKSUPPORTER_H_

#include <stack>

using namespace std;

/**
 * スタックの動作をサポートするクラス
 */
template <typename T>
class StackSupporter {
private:
	/**
	 * 対象スタック
	 */
	stack<T> *supporter = NULL;

private:
	StackSupporter() { }
public:
	/**
	 * チェイン時、
	 * 自分のインスタンスを返すので、
	 * デストラクタをpublicにする必要がある。
	 */
	~StackSupporter() { }

public:
	/**
	 * 自分のインスタンスを返す
	 * @return 自分のインスタンス
	 */
	static StackSupporter& Call() {
		static StackSupporter instance;
		return instance;
	}

public:
	/**
	 * 対象リストをセットする <br>
	 * チェイン機能を付与する
	 * @param target 対象リスト
	 * @return 対象リスト
	 */
	StackSupporter GetSupporter(stack<T>& target) {
		supporter = &target;
		return Call();
	}

	/**
	 * リストに値を入れる <br>
	 * チェイン機能を付与する
	 * @param value 入れる値
	 * @param continuity 挿入する次の値があるか
	 * @return 自分のインスタンス
	 */
	StackSupporter push(T value, bool continuity) {
		supporter->push(value);
		if (!continuity) {
			supporter = NULL;
		}
		return Call();
	}
};

#include "StackSupporter.h"

#endif
