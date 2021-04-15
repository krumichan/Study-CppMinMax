#ifndef _EXCEPTIONID_H_
#define _EXCEPTIONID_H_

/**
 * エラーIDの列挙型
 */
enum EXCEPTION_ID {
	EXCEPTION_VALID_RANGE = -999//!< EXCEPTION_VALID_RANGE　範囲の初又は末が不正
	,EXCEPTION_NOT_INCLUDED     //!< EXCEPTION_NOT_INCLUDED　任意の値が範囲の中で含まれていない
	,EXCEPTION_UNKNOWN = -9999  //!< EXCEPTION_UNKNOWN　どちらのエラーにも該当しない
};

#endif
