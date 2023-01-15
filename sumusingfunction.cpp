#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int s;
    s=sum(10,15);
    cout<<"Sum is :"<<s<<endl;
    
    return 0;
}