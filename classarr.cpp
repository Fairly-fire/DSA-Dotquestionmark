#include<iostream>
using namespace std;

class Array{
    private:
        int *array;
        int size;
        int filled;
    public:
        Array(){
            size=13;
            array = new int[size];
            for(int i=0;i<5;i++){
                array[i]= i+1;
            }
            filled=5;
        }
        Array(int size){
            this->size = size;
            array = new int[size];
            filled = 0;
        }
        void printarr(){
            for(int i=0;i<filled;i++){
                cout<<array[i]<<"  ";
            }
            cout<<endl;
        }
        void append(int ele){
            array[filled]=ele;
        }
};

int main(){
    Array *arr1;
    arr1 = new Array();
    arr1->printarr();

    Array arr2;
    arr2.printarr();
    //arr1->append(5);
    //arr1->printarr();
    return 0;
}