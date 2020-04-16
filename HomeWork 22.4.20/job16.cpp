#include <iostream>
using namespace std;

int main()
{
    int a,num,min=999,max=0;
    

while(num!=999)
{
    if(num==999)
        break;
        
    cout<<"enter an number\n";
    cin>>num;
    
    if(num!=999)
    {
        
        if(num<min) min=num;

        if(num>max) max=num;
    }
    
}

cout<<num<<" "<<max;

    return 0;
}
