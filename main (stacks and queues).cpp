/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main ()
{
    
    srand(time(0));
    Stack myStack;
    Queue myQueue;
    clock_t time1=clock();
    for(int i = 0; i < 1000; i++)
    { 
    int rand_num = rand() % 100 + 1;

    if (rand_num < 51) {
        int randomNumber = rand() % 100 + 1;
        myStack.push(randomNumber);
    } else {
        myStack.pop();
    }
    }
    clock_t time2=clock();
    double run_time = (time2-time1)/(double)CLOCKS_PER_SEC;
    
    clock_t time3=clock();
    for(int i = 0; i < 1000; i++)
    {
        int rand_number = rand() % 100 + 1;
        if(rand_number < 51)
        {
            int randomNumber2 = rand() % 100 + 1;
            myQueue.insert(randomNumber2);
        }
        else {
            myQueue.remove();
        }
    }
  clock_t time4=clock();
  double run_time2 = (time4-time3)/(double)CLOCKS_PER_SEC;
  myStack.print();
  cout << "\nStack Run time: " << run_time << " seconds\n";
  cout << "\n\n";
  myQueue.print();
  cout << "\nQueue Run time: " << run_time2 << " seconds\n";

 

  return 0;
}