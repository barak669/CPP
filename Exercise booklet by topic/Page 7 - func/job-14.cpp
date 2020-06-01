#include<iostream>
using namespace std;

double func(int choice)
{
    int mul,divide,power,pow, mod, num1, num2;
    
    cout << "enter your first number" << endl;
    cin >> num1;
    cout << "enter your second number" << endl;
    cin >> num2;
    
    if (choice == 1)
    {
        mul=num1 * num2;
        cout<<mul<<endl;
    }
    else if (choice == 2)
    {
        divide=num1 / num2;
        cout<<divide<<endl;
    }
    else if (choice == 3)
    {
        mod=num1 % num2;
        cout<<mod<<endl;
    }
    else if (choice == 4)
    {
        power = num1 ^ num2;
        cout<<power<<endl;
    }
}

int main()
{
    int choice;
    int mul, divide, mod, power;
    
    cout << "enter your choice (1 or 4)" << endl;
    cin >> choice;
    
    if (choice == 1 || 2 || 3 || 4)
    {
        func(choice);
    }
    
    else 
    {
        cout<<"Worng Input!!!"<<endl;
    }
    return 0;
}

