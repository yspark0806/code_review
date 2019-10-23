#include "priority_queue.h"


template <>
TemplatePriorityQueue<int>::TemplatePriorityQueue(){
}

template <>
TemplatePriorityQueue<int>::~TemplatePriorityQueue(){
}

// checks whether the underlying container is empty
template <>
bool TemplatePriorityQueue<int>::empty() const{
        return storage.empty();
}

// returns the number of elements
template <>
int TemplatePriorityQueue<int>::size() {
        return storage.size();
}

// accesses the top element
template <>
const int& TemplatePriorityQueue<int>::top() const{
        return storage.top();
}

// removes the top element
template <>
void TemplatePriorityQueue<int>::pop(){
        storage.pop();
}

// inserts element and sorts the underlying container
template <>
void TemplatePriorityQueue<int>::push(const int& val){
        storage.push(val);
}
