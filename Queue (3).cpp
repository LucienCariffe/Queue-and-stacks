#include "Queue.h"
    
Queue::Queue()
{
    count = 0;   
}

Queue::Queue(const Queue& copy)
{
    count = copy.count;
    data = copy.data;
}

Queue::~Queue()
{
    // nothing to do here
}
    
void Queue::insert(const int number)
{
    if (!isFull())
    {
        data.push_back(number);
        count++;
    }
}

int Queue::remove()
{
    if (isEmpty())
    {
        return -1;
    }
    else 
    {
        data.erase(data.begin());
        return --count;
    }
}
    
bool Queue::isFull() const
{
    
    return false;
}

bool Queue::isEmpty() const
{
    return (count == 0);
}

int Queue::getCount() const
{
    return count;
}

void Queue::print() const
{
    cout << "Queue printing ....\n";
    for (int i = 0; i < data.size(); i++) 
    {
        cout << data[i] << " ";
    }
    cout << "\nSize of Queue >> " << data.size();
}








