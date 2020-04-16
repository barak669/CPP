#include <iostream>
using namespace std;

int main()
{
    int i;
    
    for(i=100 ; i<=999 ; i++)
    {
        if( (((i%10)%2) == 0) && ((((i%100)/10)%2) == 0) && (((i/100) %2) == 0) )
        {
            cout<<i<<endl;
        }
    }
    return 0;
}



