#define PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

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


#endif  // PRIORITY_QUEUE_H_