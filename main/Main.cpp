#include "../supporter/ListSupporter.h"
#include "../supporter/VectorSupporter.h"
#include "../supporter/StackSupporter.h"
#include "../supporter/QueueSupporter.h"
#include "../supporter/DequeSupporter.h"
#include "../math/MinMax.h"
#include "../utility/Utility.h"

using namespace std;
using namespace math;

int main(void) {
	int iNumberA = 10;
	int iNumberB = 20;

	double dNumberA = 10.5;
	double dNumberB = 20.3;

	int iArr[10] = { 10, 15, 2, 30, 19, 18, 22, 33, 23, 52 };
	int iArrSize = Utility::Call().Size(iArr);
	double dArr[10] = { 10.2, 15.3, 22.1, 1.5, 6.7, 9.2, 90.1, 11.3, 15.2, 11.12 };
	int dArrSize = Utility::Call().Size(dArr);

	int* ipArr = new int[10] { 12, 22, 32, 1, 22, 55, 14, 85, 23, 72 };
	int ipSize = Utility::Call().Size(ipArr);
	double* dpArr = new double[10] { 13.5, 86.5, 11.23, 33.25, 90.12, 100.11, 23.33, 13.5, 65.9, 87.1 };
	int dpSize = Utility::Call().Size(dpArr);

	list<int> iList;
	ListSupporter<int>::Call().GetSupporter(iList)
			.push_back(25, true)
			.push_back(12, true)
			.push_back(30, true)
			.push_back(23, true)
			.push_back(99, false);

	list<double> dList;
	ListSupporter<double>::Call().GetSupporter(dList)
			.push_back(11.2, true)
			.push_back(15.7, true)
			.push_back(21.23, true)
			.push_back(32.11, true)
			.push_back(15.7, true);

	vector<int> iVector;
	VectorSupporter<int>::Call().GetSupporter(iVector)
			.push_back(10, true)
			.push_back(75, true)
			.push_back(50, true)
			.push_back(47, true)
			.push_back(13, false);

	vector<double> dVector;
	VectorSupporter<double>::Call().GetSupporter(dVector)
			.push_back(13.2, true)
			.push_back(15.7, true)
			.push_back(13.2, true)
			.push_back(72.5, true)
			.push_back(53.8, false);

	stack<int> iStack;
	StackSupporter<int>::Call().GetSupporter(iStack)
			.push(10, true)
			.push(18, true)
			.push(35, true)
			.push(27, true)
			.push(34, false);

	stack<double> dStack;
	StackSupporter<double>::Call().GetSupporter(dStack)
			.push(15.2, true)
			.push(65.2, true)
			.push(15.2, true)
			.push(38.79, true)
			.push(92.147, false);

	queue<int> iQueue;
	QueueSupporter<int>::Call().GetSupporter(iQueue)
			.push(22, true)
			.push(76, true)
			.push(31, true)
			.push(28, true)
			.push(44, false);

	queue<double> dQueue;
	QueueSupporter<double>::Call().GetSupporter(dQueue)
			.push(44.52, true)
			.push(67.53, true)
			.push(33.19, true)
			.push(1.5, true)
			.push(4, false);

	deque<int> iDeque;
	DequeSupporter<int>::Call().GetSupporter(iDeque)
			.push_back(17, true)
			.push_back(22, true)
			.push_back(44, true)
			.push_back(17, true)
			.push_back(1, true);

	deque<double> dDeque;
	DequeSupporter<double>::Call().GetSupporter(dDeque)
			.push_back(12.33, true)
			.push_back(22.343, true)
			.push_back(44.387, true)
			.push_back(782.31, true)
			.push_back(11.43, false);


	/// Max Test
	cout << "MaxTest-------------------------------" << endl;
	cout << "integer max : " << MinMax::Call().Max(iNumberA, iNumberB) << endl;
	cout << "double max : " << MinMax::Call().Max(dNumberA, dNumberB) << endl;
	cout << "integer arr max : " << MinMax::Call().Max(iArr, iArrSize) << endl;
	cout << "double arr max : " << MinMax::Call().Max(dArr, dArrSize) << endl;
	cout << "integer new arr max : " << MinMax::Call().Max(ipArr, ipSize) << endl;
	cout << "double new arr max : " << MinMax::Call().Max(dpArr, dpSize) << endl;
	cout << "integer list max : " << MinMax::Call().Max(iList) << endl;
	cout << "double list max : " << MinMax::Call().Max(dList) << endl;
	cout << "integer vector max : " << MinMax::Call().Max(iVector) << endl;
	cout << "double vector max : " << MinMax::Call().Max(iVector) << endl;
	cout << "integer stack max : " << MinMax::Call().Max(iStack) << endl;
	cout << "double stack max : " << MinMax::Call().Max(dStack) << endl;
	cout << "integer queue max : " << MinMax::Call().Max(iQueue) << endl;
	cout << "double queue max : " << MinMax::Call().Max(dQueue) << endl;
	cout << "integer deque max : " << MinMax::Call().Max(iDeque) << endl;
	cout << "double deque max : " << MinMax::Call().Max(dDeque) << endl;
	cout << "integer list range max : " << MinMax::Call().RangeMax(iList, 0, 2) << endl;
	cout << "rank integer list max : " << MinMax::Call().RankMax(iList, 2) << endl;
	cout << "rank integer vector max : " << MinMax::Call().RankMax(iVector, 2) << endl;
	cout << "rank integer stack max : " << MinMax::Call().RankMax(iStack, 2) << endl;
	cout << "rank integer queue max : " << MinMax::Call().RankMax(iQueue, 2) << endl;
	cout << "--------------------------------------" << endl;

	/// Min Test
	cout << "MinTest-------------------------------" << endl;
	cout << "integer min : " << MinMax::Call().Min(iNumberA, iNumberB) << endl;
	cout << "double min : " << MinMax::Call().Min(dNumberA, dNumberB) << endl;
	cout << "integer arr min : " << MinMax::Call().Min(iArr, iArrSize) << endl;
	cout << "double arr min : " << MinMax::Call().Min(dArr, dArrSize) << endl;
	cout << "integer new arr min : " << MinMax::Call().Min(ipArr, ipSize) << endl;
	cout << "double new arr min : " << MinMax::Call().Min(dpArr, dpSize) << endl;
	cout << "integer list min : " << MinMax::Call().Min(iList) << endl;
	cout << "double list min : " << MinMax::Call().Min(dList) << endl;
	cout << "integer vector min : " << MinMax::Call().Min(iVector) << endl;
	cout << "double vector min : " << MinMax::Call().Min(iVector) << endl;
	cout << "integer stack min : " << MinMax::Call().Min(iStack) << endl;
	cout << "double stack min : " << MinMax::Call().Min(dStack) << endl;
	cout << "integer queue min : " << MinMax::Call().Min(iQueue) << endl;
	cout << "double queue min : " << MinMax::Call().Min(dQueue) << endl;
	cout << "integer deque min : " << MinMax::Call().Min(iDeque) << endl;
	cout << "double deque min : " << MinMax::Call().Min(dDeque) << endl;
	cout << "integer list range min : " << MinMax::Call().RangeMin(iList, 0, 2) << endl;
	cout << "rank integer list min : " << MinMax::Call().RankMin(iList, 2) << endl;
	cout << "rank integer vector min : " << MinMax::Call().RankMin(iVector, 2) << endl;
	cout << "rank integer stack min : " << MinMax::Call().RankMin(iStack, 2) << endl;
	cout << "rank integer queue min : " << MinMax::Call().RankMin(iQueue, 2) << endl;
	cout << "--------------------------------------" << endl;
}

