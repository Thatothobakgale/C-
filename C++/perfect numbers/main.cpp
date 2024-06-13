#include <iostream>

using namespace std;

int main()
{
    cout<<"Find the perfect numbers between 0 and 500\n"<<endl;

    int i=1, u=1, sum=0;

    cout<<"The perfect numbers between 0 and 500\n"<<endl;
    while(i<=500)
    {
        while(u<=500)
        {
            if(u<i)
            {
                 if(i % u == 0)
                sum = sum + u;
            }
            u++;
        }
        if(sum == i)
    {
        cout<< i << " "<<"\n";
    }
     i++;
     u=1;
     sum=0;
    }

    return 0;
}

