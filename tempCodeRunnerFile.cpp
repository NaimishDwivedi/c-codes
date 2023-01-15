#include<iostream>
using namespace std;

void max(int n1, int n2)

{
    if (n1>n2)
    {
        cout<<"Larger number is : "<<n1;
    }
    else
    
        cout<<"Larger number is : "<<n2;
    
}
int main()
{
    int n1;
    int n2;
    cout<<"Enter the first number :";
    cin>>n1;
    cout<<"Enter the second number :";
    cin>>n2;
    max(n1, n2);
    
    return 0;
}