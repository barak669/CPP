#include <iostream>
using namespace std;

int main()
{
    int num , i , sum=0;
    
    for(i = 0 ; i< 10 ; i++)
    {
        cout<< "enter number\n";
        cin>>num;
        
         sum = ((num%10) * ((num%100)/10)) + (((num%100)/10) * (num/100));
        
        cout<<sum<<endl;
        
    }
    

    return 0;
}

