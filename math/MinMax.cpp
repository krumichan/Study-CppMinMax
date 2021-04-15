#include "MinMax.h"

#include "../exception/ExceptionPrinter.h"
#include "../utility/Utility.h"
#include <algorithm>
#include "../sorter/ListSorter.h"
#include "../sorter/VectorSorter.h"
#include "../sorter/StackSorter.h"
#include "../sorter/QueueSorter.h"

using namespace math;

/**
 * 整数の最大値の求めるファンクション。 <br>
 * 二つの値を比較する。
 * @param numberA 一つ目の整数
 * @param numberB 二つ目の整数
 * @return 比較結果
 */
int MinMax::Max(int numberA, int numberB) {
	return MAXIMUM(numberA, numberB);
}

/**
 * float型の最大値の求めるファンクション。 <br>
 * 二つの値を比較する。
 * @param numberA 一つ目のfloat値
 * @param numberB 二つ目のfloat値
 * @return 比較結果
 */
float MinMax::Max(float numberA, float numberB) {
	return MAXIMUM(numberA, numberB);
}

/**
 * double型の最大値の求めるファンクション。 <br>
 * 二つの値を比較する。
 * @param numberA 一つ目のdouble値
 * @param numberB 二つ目のdouble値
 * @return 比較結果
 */
double MinMax::Max(double numberA, double numberB) {
	return MAXIMUM(numberA, numberB);
}

/**
 * 整数配列で、最大値を求めるファンクション。 <br>
 * @param iArr 対象配列
 * @param size 対象配列の長さ
 * @return 配列の中の最大値
 */
int MinMax::Max(int iArr[], int size) {
	int result = iArr[0];
	for (int idx = 1; idx < size; ++idx) {
		result = MAXIMUM(result, iArr[idx]);
	}
	return result;
}

/**
 * double配列で、最大値を返す。 <br>
 * @param dArr 対象配列
 * @param size 対象配列の長さ
 * @return 配列の中の最大値
 */
double MinMax::Max(double dArr[], int size) {
	double result = dArr[0];
	for (int idx = 1; idx < size; ++idx) {
		result = MAXIMUM(result, dArr[idx]);
	}
	return result;
}

/**
 * 整数リストで、最大値を返す。<br>
 * @param iList 対象リスト
 * @return リストの中の最大値
 */
int MinMax::Max(list<int> iList) {
	int result = iList.front();

	// 反復者を使って、リストの中身を循環する。
	for (list<int>::iterator it = iList.begin(); it != iList.end(); ++it) {
		result = MAXIMUM(result, *it);
	}
	return result;
}

/**
 * 整数ベクターで、最大値を返す。 <br>
 * @param iVector 対象ベクター
 * @return ベクターの中の最大値
 */
int MinMax::Max(vector<int> iVector) {
	int result = iVector.front();

	// 反復者を使って、リストの中身を循環する。
	for (vector<int>::iterator it = iVector.begin(); it != iVector.end(); ++it) {
		result = MAXIMUM(result, *it);
	}
	return result;
}

/**
 * double型のリストで、最大値を求める。 <br>
 * @param dList 対象リスト
 * @return リストの中の最大値
 */
double MinMax::Max(list<double> dList) {
	double result = dList.front();

	// 反復者を使って、リストの中身を循環する。
	for (list<double>::iterator it = dList.begin(); it != dList.end(); ++it) {
		result = MAXIMUM(result, *it);
	}
	return result;
}

/**
 * double型のベクターで、最大値を求める。 <br>
 * @param dVector 対象ベクター
 * @return ベクターの中の最大値
 */
double MinMax::Max(vector<double> dVector) {
	double result = dVector.front();

	// 反復者を使って、リストの中身を循環する。
	for (vector<double>::iterator it = dVector.begin(); it != dVector.end(); ++it) {
		result = MAXIMUM(result, *it);
	}
	return result;
}

/**
 * 整数スタックで、最大値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
int MinMax::Max(stack<int> iStack) {
	stack<int> trace = iStack;
	int result = trace.top();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MAXIMUM(result, trace.top());
		trace.pop();
	}
	return result;
}

/**
 * double型のスタックで、最大値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
double MinMax::Max(stack<double> iStack) {
	stack<double> trace = iStack;
	double result = trace.top();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MAXIMUM(result, trace.top());
		trace.pop();
	}
	return result;
}

/**
 * 整数キューで、最大値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
int MinMax::Max(queue<int> iQueue) {
	queue<int> trace = iQueue;
	int result = trace.front();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MAXIMUM(result, trace.front());
		trace.pop();
	}
	return result;
}

/**
 * double型のキューで、最大値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
double MinMax::Max(queue<double> iQueue) {
	queue<double> trace = iQueue;
	double result = trace.front();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MAXIMUM(result, trace.front());
		trace.pop();
	}
	return result;
}

/**
 * 整数ディキューで、最大値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
int MinMax::Max(deque<int> iDeque) {
	deque<int> trace = iDeque;
	int result = iDeque.front();

	// 反復者を使って、リストの中身を循環する。
	for (deque<int>::iterator it = iDeque.begin(); it != iDeque.end(); ++it) {
		result = MAXIMUM(result, *it);
	}
	return result;
}

/**
 * double型のディキューで、最大値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
double MinMax::Max(deque<double> iDeque) {
	deque<double> trace = iDeque;
	double result = iDeque.front();

	// 反復者を使って、リストの中身を循環する。
	for (deque<double>::iterator it = iDeque.begin(); it != iDeque.end(); ++it) {
		result = MAXIMUM(result, *it);
	}
	return result;
}

/**
 * 整数リストの任意の範囲の中で、最大値を返す。
 * @param iList 対象リスト
 * @param start スタートインデックス
 * @param end エンドインデックス
 * @return 最大値
 */
int MinMax::RangeMax(list<int> iList, int start, int end) {
	int result;
	int size = iList.size();
	if (start < 0 || end >= size - 1) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_VALID_RANGE);
	}

	//　範囲のインデックスの宣言
	list<int>::iterator itCur = iList.begin();
	list<int>::iterator itEnd = iList.end();

	//　任意のスタート位置を設定
	advance(itCur, start);

	//　最初、スタート位置を値取得
	result = *itCur;

	// 任意のエンド位置を設定
	advance(itEnd, end + 1);

	//　比較処理
	while (itCur != itEnd) {
		result = MAXIMUM(result, *itCur);
		itCur++;
	}
	return result;
}

/**
 * 整数リストの任意のランクの値を取得
 * @param iList 対象リスト
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMax(list<int> iList, int rank) {

	//　有効な値かをチェック
	int size = iList.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	list<int> copy = ListSorter::Call().Sort(iList, SORT_DIRECTION_ASC);

	//　ランクのインデックスに移動
	list<int>::iterator it = copy.begin();
	advance(it, rank - 1);

	return *it;
}

/**
 * 整数ベクターの任意のランクの値を取得
 * @param iVector　対象ベクター
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMax(vector<int> iVector, int rank) {

	//　有効な値かをチェック
	int size = iVector.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	vector<int> copy = VectorSorter::Call().Sort(iVector, SORT_DIRECTION_ASC);

	//　ランクのインデックスに移動
	vector<int>::iterator it = copy.begin();
	advance(it, rank - 1);

	return *it;
}

/**
 * 整数スタックの任意のランクの値を取得
 * @param iStack 対象スタック
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMax(stack<int> iStack, int rank) {

	//　有効な値かをチェック
	int size = iStack.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	stack<int> copy = StackSorter::Call().Sort(iStack, SORT_DIRECTION_DESC);

	//　ランクのインデックスに移動
	for (int idx = 0; idx < rank - 1; idx++) {
		copy.pop();
	}

	return copy.top();
}

/**
 * 整数キューの任意のランクの値を取得
 * @param iQueue 対象キュー
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMax(queue<int> iQueue, int rank) {

	//　有効な値かをチェック
	int size = iQueue.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	queue<int> copy = QueueSorter::Call().Sort(iQueue, SORT_DIRECTION_DESC);

	//　ランクのインデックスに移動
	for (int idx = 0; idx < rank - 1; idx++) {
		copy.pop();
	}

	return copy.front();
}

/**
 * 整数の最小値の求めるファンクション。 <br>
 * 二つの値を比較する。
 * @param numberA 一つ目の整数
 * @param numberB 二つ目の整数
 * @return 比較結果
 */
int MinMax::Min(int numberA, int numberB) {
	return MINIMUM(numberA, numberB);
}

/**
 * float型の最小値の求めるファンクション。 <br>
 * 二つの値を比較する。
 * @param numberA 一つ目のfloat値
 * @param numberB 二つ目のfloat値
 * @return 比較結果
 */
float MinMax::Min(float numberA, float numberB) {
	return MINIMUM(numberA, numberB);
}

/**
 * double型の最小値の求めるファンクション。 <br>
 * 二つの値を比較する。
 * @param numberA 一つ目のdouble値
 * @param numberB 二つ目のdouble値
 * @return 比較結果
 */
double MinMax::Min(double numberA, double numberB) {
	return MINIMUM(numberA, numberB);
}

/**
 * 整数配列で、最小値を求めるファンクション。 <br>
 * @param iArr 対象配列
 * @param size 対象配列の長さ
 * @return 配列の中の最大値
 */
int MinMax::Min(int iArr[], int size) {
	int result = iArr[0];
	for (int idx = 1; idx < size; ++idx) {
		result = MINIMUM(result, iArr[idx]);
	}
	return result;
}

/**
 * double配列で、最小値を返す。 <br>
 * @param dArr 対象配列
 * @param size 対象配列の長さ
 * @return 配列の中の最大値
 */
double MinMax::Min(double dArr[], int size) {
	double result = dArr[0];
	for (int idx = 1; idx < size; ++idx) {
		result = MINIMUM(result, dArr[idx]);
	}
	return result;
}

/**
 * 整数リストで、最小値を返す。<br>
 * @param iList 対象リスト
 * @return リストの中の最大値
 */
int MinMax::Min(list<int> iList) {
	int result = iList.front();

	// 反復者を使って、リストの中身を循環する。
	for (list<int>::iterator it = iList.begin(); it != iList.end(); ++it) {
		result = MINIMUM(result, *it);
	}
	return result;
}

/**
 * 整数ベクターで、最小値を返す。 <br>
 * @param iVector 対象ベクター
 * @return ベクターの中の最大値
 */
int MinMax::Min(vector<int> iVector) {
	int result = iVector.front();

	// 反復者を使って、リストの中身を循環する。
	for (vector<int>::iterator it = iVector.begin(); it != iVector.end(); ++it) {
		result = MINIMUM(result, *it);
	}
	return result;
}

/**
 * double型のリストで、最小値を求める。 <br>
 * @param dList 対象リスト
 * @return リストの中の最大値
 */
double MinMax::Min(list<double> dList) {
	double result = dList.front();

	// 反復者を使って、リストの中身を循環する。
	for (list<double>::iterator it = dList.begin(); it != dList.end(); ++it) {
		result = MINIMUM(result, *it);
	}
	return result;
}

/**
 * double型のベクターで、最小値を求める。 <br>
 * @param dVector 対象ベクター
 * @return ベクターの中の最大値
 */
double MinMax::Min(vector<double> dVector) {
	double result = dVector.front();

	// 反復者を使って、リストの中身を循環する。
	for (vector<double>::iterator it = dVector.begin(); it != dVector.end(); ++it) {
		result = MINIMUM(result, *it);
	}
	return result;
}

/**
 * 整数スタックで、最小値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
int MinMax::Min(stack<int> iStack) {
	stack<int> trace = iStack;
	int result = trace.top();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MINIMUM(result, trace.top());
		trace.pop();
	}
	return result;
}

/**
 * double型のスタックで、最小値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
double MinMax::Min(stack<double> iStack) {
	stack<double> trace = iStack;
	double result = trace.top();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MINIMUM(result, trace.top());
		trace.pop();
	}
	return result;
}

/**
 * 整数キューで、最小値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
int MinMax::Min(queue<int> iQueue) {
	queue<int> trace = iQueue;
	int result = trace.front();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MINIMUM(result, trace.front());
		trace.pop();
	}
	return result;
}

/**
 * double型のキューで、最小値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
double MinMax::Min(queue<double> iQueue) {
	queue<double> trace = iQueue;
	double result = trace.front();
	trace.pop();
	int size = trace.size();
	for (int idx = 0; idx < size; idx++) {
		result = MINIMUM(result, trace.front());
		trace.pop();
	}
	return result;
}

/**
 * 整数ディキューで、最小値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
int MinMax::Min(deque<int> iDeque) {
	deque<int> trace = iDeque;
	int result = iDeque.front();

	// 反復者を使って、リストの中身を循環する。
	for (deque<int>::iterator it = iDeque.begin(); it != iDeque.end(); ++it) {
		result = MINIMUM(result, *it);
	}
	return result;
}

/**
 * double型のディキューで、最小値を求めるファンクション。 <br>
 * @param 対象スタック
 * @return スタックの中の最大値
 */
double MinMax::Min(deque<double> iDeque) {
	deque<double> trace = iDeque;
	double result = iDeque.front();

	// 反復者を使って、リストの中身を循環する。
	for (deque<double>::iterator it = iDeque.begin(); it != iDeque.end(); ++it) {
		result = MINIMUM(result, *it);
	}
	return result;
}

/**
 * 整数リストの任意の範囲の中で、最小値を返す。 <br>
 * インデックスの計算は配列のインデックスと同様な形とする。
 * @param iList 対象リスト
 * @param start スタートインデックス
 * @param end エンドインデックス
 * @return 最大値
 */
int MinMax::RangeMin(list<int> iList, int start, int end) {
	int result;
	int size = iList.size();
	if (start < 0 || end >= size - 1) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_VALID_RANGE);
	}

	//　範囲のインデックスの宣言
	list<int>::iterator itCur = iList.begin();
	list<int>::iterator itEnd = iList.end();

	//　任意のスタート位置を設定
	advance(itCur, start);

	//　最初、スタート位置を値取得
	result = *itCur;

	// 任意のエンド位置を設定
	advance(itEnd, end + 1);

	//　比較処理
	while (itCur != itEnd) {
		result = MINIMUM(result, *itCur);
		itCur++;
	}
	return result;
}

/**
 * 整数リストの後ろから、任意のランクの値を取得
 * @param iList 対象リスト
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMin(list<int> iList, int rank) {

	//　有効な値かをチェック
	int size = iList.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	list<int> copy = ListSorter::Call().Sort(iList, SORT_DIRECTION_DESC);

	//　ランクのインデックスに移動
	list<int>::iterator it = copy.begin();
	advance(it, rank - 1);

	return *it;
}

/**
 * 整数ベクターの後ろから、任意のランクの値を取得
 * @param iVector　対象ベクター
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMin(vector<int> iVector, int rank) {

	//　有効な値かをチェック
	int size = iVector.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	vector<int> copy = VectorSorter::Call().Sort(iVector, SORT_DIRECTION_DESC);

	//　ランクのインデックスに移動
	vector<int>::iterator it = copy.begin();
	advance(it, rank - 1);

	return *it;
}

/**
 * 整数スタックの後ろから、任意のランクの値を取得
 * @param iStack 対象スタック
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMin(stack<int> iStack, int rank) {

	//　有効な値かをチェック
	int size = iStack.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	stack<int> copy = StackSorter::Call().Sort(iStack, SORT_DIRECTION_ASC);

	//　ランクのインデックスに移動
	for (int idx = 0; idx < rank - 1; idx++) {
		copy.pop();
	}

	return copy.top();
}

/**
 * 整数キューの後ろから、任意のランクの値を取得
 * @param iQueue 対象キュー
 * @param rank 任意のランク
 * @return 任意のランクの値
 */
int MinMax::RankMin(queue<int> iQueue, int rank) {

	//　有効な値かをチェック
	int size = iQueue.size();
	if (rank < 0 || rank >= size) {
		return ExceptionPrinter::Call().GetMessage(EXCEPTION_NOT_INCLUDED);
	}

	//　ソートする
	queue<int> copy = QueueSorter::Call().Sort(iQueue, SORT_DIRECTION_ASC);

	//　ランクのインデックスに移動
	for (int idx = 0; idx < rank - 1; idx++) {
		copy.pop();
	}

	return copy.front();
}
