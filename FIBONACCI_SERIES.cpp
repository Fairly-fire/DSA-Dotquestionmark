#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}

// FIBONACCI SERIES (2nd METHOD)
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number fiboncii series";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }
}

