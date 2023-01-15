#include<iostream>
using namespace std;

int fact(int num)
{
    if(num<1)
    {
        return 1;   // This is base case..
    }
    else{
        return num*fact(num-1); // This is recursive case..
    }
}
int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"Factorial of the number is "<<fact(num);

    return 0;
}