#ifndef _DEQUESUPPORTER_H_
#define _DEQUESUPPORTER_H_

#include <deque>

using namespace std;

template <typename T>
class DequeSupporter {
private:
	deque<T> *supporter = NULL;

private:
	DequeSupporter() { }
public:
	~DequeSupporter() { }

public:
	static DequeSupporter& Call() {
		static DequeSupporter instance;
		return instance;
	}

public:
	DequeSupporter GetSupporter(deque<T>& target) {
		supporter = &target;
		return Call();
	}

	DequeSupporter push_back(T value, bool continuity) {
		supporter->push_back(value);
		if (!continuity) {
			supporter = NULL;
		}
		return Call();
	}
};

#endif
