#include <iostream>
using namespace std;

int main()
{
    int i;
    
    for(i=100 ; i<=999 ; i++)
    {
        if( i%10 -3 == (i%100)/10 && (i%100)/10 +2 == i/100)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
