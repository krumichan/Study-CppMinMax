#ifndef _VECTORSUPPORTER_H_
#define _VECTORSUPPORTER_H_

#include <vector>

using namespace std;

/**
 * ベクターの動作をサポートするクラス
 */
template<typename T>
class VectorSupporter {
private:
	/**
	 * 対象ベクター
	 */
	vector<T> *supporter = NULL;

private:
	VectorSupporter() { }
public:
	/**
	 * チェイン時、
	 * 自分のインスタンスを返すので、
	 * デストラクタをpublicにする必要がある。
	 */
	~VectorSupporter() { }

public:
	/**
	 * 自分のインスタンスを返す
	 * @return 自分のインスタンス
	 */
	static VectorSupporter& Call() {
		static VectorSupporter value;
		return value;
	}

public:
	/**
	 * 対象リストをセットする <br>
	 * チェイン機能を付与する
	 * @param target 対象リスト
	 * @return 対象リスト
	 */
	VectorSupporter GetSupporter(vector<T>& target) {
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
	VectorSupporter push_back(T value, bool continuity) {
		supporter->push_back(value);
		if (!continuity) {
			supporter = NULL;
		}
		return Call();
	}
};

#endif
