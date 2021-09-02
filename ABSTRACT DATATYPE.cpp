#include<iostream>
using namespace std;

class Array
{
    private:
        int *array;
        int size;
        int filled;
    public:
        Array()
        {
            size=13;
            array = new int [size];
            for(int i=0;i<size;i++)
            {
                array[i] = i+1;
            }
            filled=5;
        }
        Array(int size)
        {
            this->size = size;
            array = new int [size];
            filled = 0;
        }
    void printElement()
    {
        for(int i=0;i<filled;i++)//i<size ,then it will give extra zeros which we dont want to allocate memory
        {
            cout<<array[i]<<"--";
        }
     cout<<endl;
    }
};
int main()
{
   Array *array1;
   array1 = new Array();

   array1->printElement();
   return 0;
}
