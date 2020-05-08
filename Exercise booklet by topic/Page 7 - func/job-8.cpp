#include <iostream>
using namespace std;


void func()
{
    int i=0;
    
    for (i=100; i>=1; i--)
    {
        cout<<i*i<<endl;
    }
}
int main()
{
    func();
    
    cout<<"function ended"<<endl;
    
    return 0;
}

