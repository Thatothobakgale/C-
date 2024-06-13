#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout<<"Enter a operator: +; -; *; /"<<endl;
    cin>>op;

    cout<<"Enter first operands: "<<endl;
    cin>>num1;

    cout<<"Enter second operands: "endl;
    cin>>num2;

    switch(op)
    {
    case '+':
        cout<<num1<<"+"<<num2<<"="<<num1 + num2<<endl;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1 - num2<<endl;
        break;

        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1 * num2<<endl;
            break;

        case '/':
            cout<<num1<<"/"<<num2<<"="<<num1 / num2<<endl;
            break;

        default:
            cout<<"Error! operator is incorrect";
            break;
    }

    return 0;
}
