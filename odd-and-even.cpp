#include <iostream>
using namespace std;

int main()
{
    int num1 , num2 , sum;
    
    cout<<"enter first number\n";
    cin>>num1;
    
    cout<<"enter second number\n";
    cin>>num2;
    
    if(num1 % 2 == 0 && num2 %2 == 1)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
    
    

    return 0;
}