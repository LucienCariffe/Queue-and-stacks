#include "Stack.h"
#include <cstdlib>
#include <ctime>

Stack::Stack()
{
    count = 0;    
}

Stack::Stack(const Stack& copy)
{
    count = copy.count;
    data = copy.data;
}

Stack::~Stack()
{
    
}
    
void Stack::push(const int number)
{
    if (!isFull())
    {
        data.push_back(number);
        count++;
    }
}
    
int Stack::pop()
{
    if (isEmpty())
    {
        return -1;
    }
    else 
    {
        count--;
        int top = data.back();
        data.pop_back();
        return top;
    }
}

int Stack::top() const
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        return data.back();
    }
}

bool Stack::isFull() const
{
    return false;
}

bool Stack::isEmpty() const
{
    return (count == 0);
}

int Stack::getCount() const
{
    return count;    
}

void Stack::print() const
{
    cout << "Stack printing ....\n";
    for (int i = 0; i < data.size(); i++) 
    {
        cout << data[i] << " ";
    }
    cout << "\nSize of Stack >> " << data.size();
}

    
    
    
    