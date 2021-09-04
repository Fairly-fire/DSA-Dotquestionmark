//Add at end using classes
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
        for(int i=0;i<filled;i++)
        {
            cout<<array[i]<<"--";
        }
     cout<<endl;

      int getelement(int index)
      {
          return array[index];
      }
      int addatend(int element)
      {
          if(filled<size)
          {
              array[filled]=element;
              filled++;
              return true;
          }
          else
          {
              false;
          }

      }

};
int main()
{
   Array *array1;
   array1 = new Array();

   array1->printElement();
   array1->getelement(5);
   array1->addatend(4);
   return 0;
}
