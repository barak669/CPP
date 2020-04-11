#include <iostream>
using namespace std; 

int main()
{
    int num , i , sum=0;
    
    for(i=1000; i<=9999; i++)
    {
        if  ( i == (i%100+i/100) * (i%100+i/100))
        {
            cout<<i<<endl;
        }
        
    }

    return 0;
}

