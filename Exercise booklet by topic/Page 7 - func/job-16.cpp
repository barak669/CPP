#include <iostream>
using namespace std;


void func(int num, int n)
{
    int place = 1;
    
    while(num!=0)
    {
        if (num%10 == n)
        {
            cout<<place<<endl;
        }
        num = num/10;
        place++;
    }
}

int main()
{
    int num, i;
    
    cout<<"enter number\n";
    cin>>num;
    
    
    for(i=1; i<=9; i++)
    {
        func(num, i);
    }
    
    return 0;
}



