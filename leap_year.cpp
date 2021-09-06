#include<iostrem>
using namespace std;
int main()
{
  int a;
  cin>>a;
  if(a%4==0 && (a%100!=0||a%400==0 ))
  {
    cout<<"its a leap year"<<endl;
  }
  else
  {
    cout<<"Its not a leap year"<<endl;
  }
