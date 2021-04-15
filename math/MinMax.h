#ifndef _MINMAX_H_
#define _MINMAX_H_

#include "../template/SingleTonTemplate.h"
//#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <queue>
#include <deque>

using namespace std;

#define MAXIMUM(x, y) (x) > (y) ? (x) : (y)
#define MINIMUM(x, y) (x) < (y) ? (x) : (y)

/**
 * 数学処理の為の、ネームスペース
 */
namespace math {

	/**
	 * 最大値・最小値を求めるクラス
	 */
	class MinMax : public SingleTon<MinMax> {

	/////////////////////////////////////
	/// Function
	/////////////////////////////////////
	/// All Max...
	public:
		/**
		 * 整数の最大値の求めるファンクション。 <br>
		 * 二つの値を比較する。
		 * @param numberA 一つ目の整数
		 * @param numberB 二つ目の整数
		 * @return 比較結果
		 */
		int Max(int, int);

		/**
		 * float型の最大値の求めるファンクション。 <br>
		 * 二つの値を比較する。
		 * @param numberA 一つ目のfloat値
		 * @param numberB 二つ目のfloat値
		 * @return 比較結果
		 */
		float Max(float, float);

		/**
		 * double型の最大値の求めるファンクション。 <br>
		 * 二つの値を比較する。
		 * @param numberA 一つ目のdouble値
		 * @param numberB 二つ目のdouble値
		 * @return 比較結果
		 */
		double Max(double, double);

	public:
		/**
		 * 整数配列で、最大値を求めるファンクション。 <br>
		 * @param iArr 対象配列
		 * @param size 対象配列の長さ
		 * @return 配列の中の最大値
		 */
		int Max(int[], int);

		/**
		 * double配列で、最大値を返す。 <br>
		 * @param dArr 対象配列
		 * @param size 対象配列の長さ
		 * @return 配列の中の最大値
		 */
		double Max(double[], int);

	public:
		/**
		 * 整数リストで、最大値を返す。<br>
		 * @param iList 対象リスト
		 * @return リストの中の最大値
		 */
		int Max(list<int>);

		/**
		 * 整数ベクターで、最大値を返す。 <br>
		 * @param iVector 対象ベクター
		 * @return ベクターの中の最大値
		 */
		int Max(vector<int>);

		/**
		 * double型のリストで、最大値を求める。 <br>
		 * @param dList 対象リスト
		 * @return リストの中の最大値
		 */
		double Max(list<double>);

		/**
		 * double型のベクターで、最大値を求める。 <br>
		 * @param dVector 対象ベクター
		 * @return ベクターの中の最大値
		 */
		double Max(vector<double>);

		/**
		 * 整数スタックで、最大値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		int Max(stack<int>);

		/**
		 * double型のスタックで、最大値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		double Max(stack<double>);

		/**
		 * 整数キューで、最大値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		int Max(queue<int>);

		/**
		 * double型のキューで、最大値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		double Max(queue<double>);

		/**
		 * 整数ディキューで、最大値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		int Max(deque<int>);

		/**
		 * double型のディキューで、最大値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		double Max(deque<double>);

	/////////////////////////////////////
	/// Range Max...
	public:
		/**
		 * 整数リストの任意の範囲の中で、最大値を返す。 <br>
		 * インデックスの計算は配列のインデックスと同様な形とする。
		 * @param iList 対象リスト
		 * @param start スタートインデックス
		 * @param end エンドインデックス
		 * @return 最大値
		 */
		int RangeMax(list<int>, int, int);

	/////////////////////////////////////
	/// Rank Max...
	public:
		/**
		 * 整数リストの任意のランクの値を取得
		 * @param iList 対象リスト
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMax(list<int>, int);

		/**
		 * 整数ベクターの任意のランクの値を取得
		 * @param iVector　対象ベクター
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMax(vector<int>, int);

		/**
		 * 整数スタックの任意のランクの値を取得
		 * @param iStack 対象スタック
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMax(stack<int>, int);

		/**
		 * 整数キューの任意のランクの値を取得
		 * @param iQueue 対象キュー
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMax(queue<int>, int);

	/////////////////////////////////////
	/// Limit Max...
		int LimitMax(list<int>, int, int);


	/////////////////////////////////////
	/// 最小値
	/////////////////////////////////////
	public:
		/**
		 * 整数の最小値の求めるファンクション。 <br>
		 * 二つの値を比較する。
		 * @param numberA 一つ目の整数
		 * @param numberB 二つ目の整数
		 * @return 比較結果
		 */
		int Min(int, int);

		/**
		 * float型の最小値の求めるファンクション。 <br>
		 * 二つの値を比較する。
		 * @param numberA 一つ目のfloat値
		 * @param numberB 二つ目のfloat値
		 * @return 比較結果
		 */
		float Min(float, float);

		/**
		 * double型の最小値の求めるファンクション。 <br>
		 * 二つの値を比較する。
		 * @param numberA 一つ目のdouble値
		 * @param numberB 二つ目のdouble値
		 * @return 比較結果
		 */
		double Min(double, double);

		/**
		 * 整数配列で、最小値を求めるファンクション。 <br>
		 * @param iArr 対象配列
		 * @param size 対象配列の長さ
		 * @return 配列の中の最大値
		 */
		int Min(int[], int);

		/**
		 * double配列で、最小値を返す。 <br>
		 * @param dArr 対象配列
		 * @param size 対象配列の長さ
		 * @return 配列の中の最大値
		 */
		double Min(double[], int);

	public:
		/**
		 * 整数リストで、最小値を返す。<br>
		 * @param iList 対象リスト
		 * @return リストの中の最大値
		 */
		int Min(list<int>);

		/**
		 * 整数ベクターで、最小値を返す。 <br>
		 * @param iVector 対象ベクター
		 * @return ベクターの中の最大値
		 */
		int Min(vector<int>);

		/**
		 * double型のリストで、最小値を求める。 <br>
		 * @param dList 対象リスト
		 * @return リストの中の最大値
		 */
		double Min(list<double>);

		/**
		 * double型のベクターで、最小値を求める。 <br>
		 * @param dVector 対象ベクター
		 * @return ベクターの中の最大値
		 */
		double Min(vector<double>);

		/**
		 * 整数スタックで、最小値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		int Min(stack<int>);

		/**
		 * double型のスタックで、最小値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		double Min(stack<double>);

		/**
		 * 整数キューで、最小値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		int Min(queue<int>);

		/**
		 * double型のキューで、最小値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		double Min(queue<double>);

		/**
		 * 整数ディキューで、最小値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		int Min(deque<int>);

		/**
		 * double型のディキューで、最小値を求めるファンクション。 <br>
		 * @param 対象スタック
		 * @return スタックの中の最大値
		 */
		double Min(deque<double>);

	/////////////////////////////////////
	/// Range Min...
	public:
		/**
		 * 整数リストの任意の範囲の中で、最小値を返す。 <br>
		 * インデックスの計算は配列のインデックスと同様な形とする。
		 * @param iList 対象リスト
		 * @param start スタートインデックス
		 * @param end エンドインデックス
		 * @return 最大値
		 */
		int RangeMin(list<int>, int, int);

	/////////////////////////////////////
	/// Rank Min...
	public:
		/**
		 * 整数リストの後ろから、任意のランクの値を取得
		 * @param iList 対象リスト
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMin(list<int>, int);

		/**
		 * 整数ベクターの後ろから、任意のランクの値を取得
		 * @param iVector　対象ベクター
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMin(vector<int>, int);

		/**
		 * 整数スタックの後ろから、任意のランクの値を取得
		 * @param iStack 対象スタック
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMin(stack<int>, int);

		/**
		 * 整数キューの後ろから、任意のランクの値を取得
		 * @param iQueue 対象キュー
		 * @param rank 任意のランク
		 * @return 任意のランクの値
		 */
		int RankMin(queue<int>, int);


	/////////////////////////////////////
	/// Template Function
	/// 注意。
	/// テンプレートは
	/// 定義と具現の分離が出来ないので、
	/// 定義と具現を同時にする必要がある。
	/// その為、使用しない。（コメント化）
	/////////////////////////////////////
//	public:
//		template <typename T, typename U>
//		typename common_type<T, U>::type Max(const T& numberX, const U& numberY)
//		{
//			if (numberX == numberY) {
//				return sizeof(numberX) > sizeof(numberY) ? numberX : numberY;
//			}
//		    return numberX > numberY ? numberX : numberY;
//		}
//
//		template <typename T, typename U>
//		typename common_type<T, U>::type Min(const T& numberX, const U& numberY)
//		{
//			if (numberX == numberY) {
//				return sizeof(numberX) > sizeof(numberY) ? numberX : numberY;
//			}
//		    return numberX < numberY ? numberX : numberY;
//		}
//
//		template <typename R, typename T, typename U>
//		R TypeMax(T numberX, U numberY)
//		{
//			return numberX > numberY ? numberX : numberY;
//		}
//
//		template <typename R, typename T, typename U>
//		R TypeMin(T numberX, U numberY)
//		{
//			return numberX < numberY ? numberX : numberY;
//		}
//
//		template <typename T, size_t S>
//		typename common_type<T>::type Max(const T (&array)[S])
//		{
//			T max = array[0];
//			int idx;
//			int size = (int)S;
//			for (idx = 1; idx < size; ++idx) {
//				max = MAXIMUM(max, array[idx]);
//			}
//			return max;
//		}
//
//		template <typename T, size_t S>
//		typename common_type<T>::type Min(const T (&array)[S])
//		{
//			T min = array[0];
//			int idx;
//			int size = (int)S;
//			for (idx = 1; idx < size; ++idx) {
//				min = MINIMUM(min, array[idx];
//			}
//		}
//
//		template <typename T>
//		T Max(const list<T> tList) {
//			T result = tList.front();
//			for (typename list<T>::const_iterator it = tList.begin(); it != tList.end(); ++it) {
//				result = MAXIMUM(result, *it);
//			}
//			return result;
//		}
//
//		template <typename T>
//		T Min(const list<T> tList) {
//			T result = tList.front();
//			for (typename list<T>::const_iterator it = tList.begin(); it != tList.end(); ++it) {
//				result = MINIMUM(result, *it);
//			}
//			return result;
//		}
//
//		template <typename T>
//		T Max(const vector<T> tVector) {
//			T result = tVector.front();
//			for (typename vector<T>::const_iterator it = tVector.begin(); it != tVector.end(); ++it) {
//				result = MAXIMUM(result, *it);
//			}
//			return result;
//		}
//
//		template <typename T>
//		T Min(const vector<T> tVector) {
//			T result = tVector.front();
//			for (typename vector<T>::const_iterator it = tVector.begin(); it != tVector.end(); ++it) {
//				result = MINIMUM(result, *it);
//			}
//			return result;
//		}
	};
}

#endif
