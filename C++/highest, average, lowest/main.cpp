#include <iostream>

using namespace std;

int main()
{
    float average;
    int num1, num2, num3;

    cout<<"Enter the first number"<<endl;
    cin>>num1;

    cout<<"Enter the second number"<<endl;
    cin>>num2;

    cout<<"Enter the third number"<<endl;
    cin>>num3;


    if(num1<num2 && num1<num3)
    {
        cout<<num1<<"is the lowest number"<<endl;
    }

    else if(num1<num2 && num1<num3)
    {
        cout<<num2<<"is the lowest number"<<endl;
    }

    else
    {
        cout<<num3<<"is the lowest number"<<endl;
    }

    if(num1>num2 && num1>num3)
    {
        cout<<num1<<"is the highest number"<<endl;
    }

    else if(num1>num2 && num1>num3)
    {
        cout<<num2<<"is the highest number"<<endl;
    }

    else
    {
        cout<<num3<<" "<<"is the highest number"<<endl;
    }

    average= (num1 + num2 + num3)/3;
    cout<<"The average is"<<average<<endl;

    return 0;
}

