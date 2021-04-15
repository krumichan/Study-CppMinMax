#ifndef _EXCEPTIONPRINTER_H_
#define _EXCEPTIONPRINTER_H_

#include "ExceptionId.h"
#include "../template/SingleTonTemplate.h"
#include "../utility/Utility.h"
#include <map>

using namespace std;

/**
 * エラーを出力するクラス
 */
class ExceptionPrinter : public SingleTon<ExceptionPrinter> {
private:
	/**
	 * エラーメッセージマッパー
	 */
	map<int, string> messageMap = {
		{ EXCEPTION_VALID_RANGE, "範囲が不正です。" }
		,{ EXCEPTION_NOT_INCLUDED, "範囲に含まれていません。" }
		,{ EXCEPTION_UNKNOWN, "unknown error..." }
	};;

public:
	/**
	 * エラーメッセージの出力及びエラーコードを返す
	 * @param exceptionId エラーコード
	 * @return エラーコード
	 */
	int GetMessage(const int exceptionId) {

		//　範囲の初又は末が不正な場合
		if (exceptionId == EXCEPTION_VALID_RANGE) {
			cout << messageMap[EXCEPTION_VALID_RANGE] << endl;
			return EXCEPTION_VALID_RANGE;

		//　任意の値が範囲の中で含まれていない場合
		} else
		if(exceptionId == EXCEPTION_NOT_INCLUDED) {
			cout << messageMap[EXCEPTION_NOT_INCLUDED] << endl;
			return EXCEPTION_NOT_INCLUDED;

		//　どちらのエラーにも該当しない場合
		} else {
			cout << messageMap[EXCEPTION_UNKNOWN] << endl;
			return EXCEPTION_UNKNOWN;
		}
	};
};

#endif
