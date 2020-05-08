#include <iostream>
using namespace std;


int func(int num)
{
    int sum=0;
    
    while(num!=0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    
    return sum;
    
}

int main()
{
    int num, result;
    
    cout<<"enter number\n";
    cin>>num;
    
    result = func(num);
    cout<<result<<endl;
    
    return 0;
}


