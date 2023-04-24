#ifndef _Queue_H_
#define _Queue_H_

#include <iostream>
#include <vector>

using namespace std;

class Queue
{
public:
    Queue();
	Queue(const Queue& copy);
    ~Queue();
    
    void insert(const int number);
    int remove();
    
	bool isFull() const;
    bool isEmpty() const;
    int getCount() const;
    void print() const;
    
private:
    int count;
    vector <int> data;
};
#endif