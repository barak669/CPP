#include <iostream>
using namespace std;


void func(int num)
{
    int sum=0;
    
    while(num!=0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    
    cout<<sum<<endl;
    
}

int main()
{
    int num;
    
    cout<<"enter number\n";
    cin>>num;
    
    func(num);
    
    return 0;
}


