#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;
    cout << "Enter the number";
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << "The number is not prime ";
        goto factors;
    }
    else
    {
        cout << "The number is prime ";
    }
factors:
cout<<endl<<"the factors are";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout <<"\n"<< i;
        }
    }
}