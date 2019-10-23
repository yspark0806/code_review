
Header file에서는 multiple include를 방지하기위해 #define guard를 사용하도록 하시면 좋을 거 같습니다.

#include <queue>

// TemplatePriorityQueue<int> priQueue;
// int customNumber = 0;
//empty check
//	if(priQueue.Empty()){
// cout << "[!] Priority Queue is empty - initalized" << endl;
//	}
// push
//	pushQueue(&priQueue,23);

template <typename T> 
class TemplatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		TemplatePriorityQueue();
		~TemplatePriorityQueue();
		bool Empty() const;
		const T& Top() const;
		int Size();
		void Push(const T&);
		void Pop();	
};
