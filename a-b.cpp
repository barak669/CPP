#include <iostream>
using namespace std;

int main()
{
    int a , b , c;
    
    cout<<"enter first number\n";
    cin>>a;
    
    cout<<"enter second number\n";
    cin>>b;
    
    cout<<"enter third number\n";
    cin>>c;
    
    if(a>b && a>c)
    {
        cout<<a;
    }
    else
    {
        if(b>c)
        {
            cout<<b;
        }
    else
    {   
        cout<<c;
    }
    
    }
    

    return 0;
}