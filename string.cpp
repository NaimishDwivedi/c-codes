#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    cout<<"You have entered : ";
    cout<<s<<endl;
    s.push_back('I');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    return 0;
}
