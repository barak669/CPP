#include <iostream>
using namespace std;

int main()
{
    int num , sum , i;
    
    cout<<"enter number\n";
    cin>>num;
    
    for(i=1 ; i<=num/2 ; i++)
    {
        if(num%i ==0)
        {
            sum = sum +i;
        }
    }
    if(sum == num)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
    
    return 0;
}

