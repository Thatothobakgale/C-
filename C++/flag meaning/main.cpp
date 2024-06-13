#include <iostream>

using namespace std;

int main()
{
    char color;

    cout<<"choose a colour: G(Green) or B(Black) OR b(Blue) or R(Red) or W(White) or g(Gold))"<<endl;
    cout<<"Enter a colour of your choice"<<endl;
    cin>>color;

    if(color == 'G')
    {
        cout<<"Fertility Of Land"<<endl;
    }
    else if(color == 'B')
    {
        cout<<"The African Family"<<endl;
    }
    else if(color == 'b')
    {
        cout<<"Beautiful Sky"<<endl;
    }
    else if(color =='R')
    {
        cout<<"Blood split during apartheid for fighting for rights"<<endl;
    }
    else if(color =='g')
    {
        cout<<"Gold"<<endl;
    }
    else if(color =='W')
    {
        cout<<"Peace"<<endl;
    }
    else
    {
        cout<<"No meaning for the South African Flag"<<endl;
    }
    return 0;
}
