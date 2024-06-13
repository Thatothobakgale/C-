#include <iostream>

using namespace std;

int main()
{
    string name, id, surname;

    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Enter your surname"<<endl;
    cin>>surname;

    cout<<"Enter your ID number"<<endl;
    cin>>id;

    cout<<"Your details are:"<<id<<name[0]<<surname;

    return 0;
}
