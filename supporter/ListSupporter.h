#ifndef _LISTSUPPORTER_H_
#define _LISTSUPPORTER_H_

#include <list>

using namespace std;

/**
 * リストの動作をサポートするクラス
 */
template <typename T>
class ListSupporter {
private:
	/**
	 * 対象リスト
	 */
	list<T> *supporter = NULL;

private:
	ListSupporter() { }
public:
	/**
	 * チェイン時、
	 * 自分のインスタンスを返すので、
	 * デストラクタをpublicにする必要がある。
	 */
	~ListSupporter() { };

public:
	/**
	 * 自分のインスタンスを返す
	 * @return 自分のインスタンス
	 */
	static ListSupporter& Call() {
		static ListSupporter<T> value;
		return value;
	}

public:
	/**
	 * 対象リストをセットする <br>
	 * チェイン機能を付与する
	 * @param target 対象リスト
	 * @return 対象リスト
	 */
	ListSupporter GetSupporter(list<T>& target) {
		supporter = &target;
		return Call();
	};

	/**
	 * リストに値を入れる <br>
	 * チェイン機能を付与する
	 * @param value 入れる値
	 * @param continuity 挿入する次の値があるか
	 * @return 自分のインスタンス
	 */
	ListSupporter push_back(T value, bool continuity) {
		supporter->push_back(value);
		if (!continuity) {
			supporter = NULL;
		}
		return Call();
	};
};

#endif
