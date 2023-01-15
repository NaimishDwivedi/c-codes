#include<iostream>
using namespace std;

void Increment( int &sal)
{
    sal=sal+5000;
    cout<<"Salary inside the function"<<sal<<endl;

}

int main()
{
    int sal=2000;
    Increment(sal);
    cout<<"salary inside the main"<<sal<<endl;

    return 0;
}