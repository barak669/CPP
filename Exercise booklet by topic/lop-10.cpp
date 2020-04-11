#include <iostream>
using namespace std;

int main()
{
    int num , sum1 =0 , sum2 =0;
    
    cout<<"enter number\n";
    cin>>num;
    
    while(num!=0)
    {
        if((num%10)%2 == 0)
        {
            sum1 = sum1 + num %10;
        }
        else
        {
            sum2 = sum2 + num %10;
        }
        num = num/10;
    }
    if(sum1 == sum2)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
    
    
    
    return 0;
}
