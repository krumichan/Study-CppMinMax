#ifndef _QUEUESUPPORTER_H_
#define _QUEUESUPPORTER_H_

#include <queue>

using namespace std;

template <typename T>
class QueueSupporter {
private:
	queue<T> *supporter = NULL;

private:
	QueueSupporter() { }
public:
	~QueueSupporter() { }

public:
	static QueueSupporter& Call() {
		static QueueSupporter instance;
		return instance;
	}

public:
	QueueSupporter GetSupporter(queue<T>& target) {
		supporter = &target;
		return Call();
	}

	QueueSupporter push(T value, bool continuity) {
		supporter->push(value);
		if (!continuity) {
			supporter = NULL;
		}
		return Call();
	}
};

#endif
