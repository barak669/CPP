#include <iostream>
using namespace std;

int main()
{
    int num1 , num2 , temp;
    
    cout<<"enter first number\n";
    cin>>num1;  // 6
    
    cout<<"enter second number\n";
    cin>>num2; // 8
    
    temp = num1;    
    num1 = num2;
    num2 = temp;
    
    cout<<num1  << " " << num2 << endl;
    return 0;
}