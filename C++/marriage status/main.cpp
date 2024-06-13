#include <iostream>

using namespace std;

int main()
{
    char marriagestatus;
    string name;
    string surname;
    string id;
    string dob;

    cout<<"Enter the name of the FARTHER"<<endl;
    cin>>name;

    cout<<"Enter the surname of the FARTHER"<<endl;
    cin>>surname;

    cout<<"Enter the date of birth of the FARTHER.(dd/mm/yyyy)"<<endl;
    cin>>dob;

    cout<<"Enter the ID Number of the FARTHER.(13 digits)"<<endl;
    cin>>id;

    cout<<"Enter the name of the MOTHER"<<endl;
    cin>>name;

    cout<<"Enter the surname of the MOTHER"<<endl;
    cin>>surname;

    cout<<"Enter the date of birth of the MORTHER.(dd/mm/yyyy)"<<endl;
    cin>>dob;

    cout<<"Enter the ID Number of the MORTHER.(13 digits)"<<endl;
    cin>>id;

    cout<<"Enter the name of the CHILD"<<endl;
    cin>>name;

    cout<<"Enter date of birth of the CHILD.(dd/mm/yyyy)"<<endl;
    cin>>dob;

    cout<<"Enter a y (yes) or n (no) for a question asked."<<endl;
    cout<<"Are the parent's married"<<endl;
    cin>>marriagestatus;

    if (marriagestatus == 'n')
    {
      cout<<"Enter the mother's surname for the child"<<endl;
      cin>>surname;
    }
    else if (marriagestatus == 'y')
    {
    cout<<"Enter the farther's surname"<<endl;
    cin>>surname;
    }
    return 0;
}
