#include <iostream>
using namespace std;

int main()
{
    int num , sum;
    
    cout<<"enter first number\n";
    cin>>num;
    
    sum = num%10 + (num%100)/10 + num/100;
    
    cout<<"=result  "<< sum;
    

    return 0;
}