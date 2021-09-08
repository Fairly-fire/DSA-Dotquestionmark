#include<iostream>
#include<limits.h>
using namespace std;

int memory[1000];
int memoryFibonacci(int n)
{
    if(n<=1)
    {
        memory[n]=n;
        return n;
    }
    else 
    {
        if(memory[n-1] == -1)
        {
            memory[n-1] = memoryFibonacci(n-1);
        }
        if(memory[n-2] == -1)
        {
            memory[n-2] = memoryFibonacci(n-2);
        }
        memory[n] = memory[n-1] + memory[n-2];
        return memory[n];
    }
}
int main()
{
    for(int i=0;i<1000;i++)
    {
        memory[i]= -1;
    }
    cout<<memoryFibonacci(10);
    
}
