#include <iostream>
using namespace std;

int main()
{
    int num , sum1 =0 , sum2 =0;
    
    cout<<"enter number\n";
    cin>>num;
    
    while(num!=0)
    {
        if((num%10) <= 9)
        {
            sum1 = sum1 + num %10;
        }
        
        num = num/10;
    }
    if(sum1>9)
    {
        sum1 =sum1%10 + sum1/10;
        cout<<sum1<<endl;
        
    }
   
    
    
    
    
   
  
  
  
    return 0;
}

