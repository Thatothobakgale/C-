#include <iostream>

using namespace std;

int main()
{
        string name;
    string surname;
    int mark;

    cout<<"Enter student name"<<endl;
    cin>>name;

    cout<<"Enter student surname"<<endl;
    cin>>surname;

    cout<<"Enter mark test obtained by a student"<<endl;
    cin>>mark;

    if (mark >=80)
    {
       cout<<name<<""<<surname<<"Passed with distinction"<<endl;
    }

    else if (mark >=50)
    {
        cout<<name<<""<<surname<<"Passed"<<endl;
    }

    else {
        cout<<name<<""<<surname<<"Failed"<<endl;
    }
    return 0;
}

