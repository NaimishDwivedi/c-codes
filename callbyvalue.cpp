#include<iostream>
using namespace std;

void salary_change(int s)
{
    s=3000;
    cout<<"Value inside the function"<<s<<endl;
}
int main()
{
    int s=2000;
    salary_change(s);
    cout<<"Value inside the main"<<s<<endl;

    return 0;
}