#include <iostream>
using namespace std;

int main()
{
    int num , i , sum, sum1=0;
    int a,min=999,max=0;
    int sec, temp; 
    
    
    // Targil 11
    cout<< "enter number\n";
    cin>>num;
       
    sum = ((num%10) * ((num%100)/10)) + (((num%100)/10) * (num/100));
       
    cout<<sum<<endl;
    
    // Targil 15
    while(sum!=0)
    {
        if((sum%10) <= 9)
        {
            sum1 = sum1 + sum%10;
        }
        
        sum = (sum/10);
    }
    
    if(sum1>9)
    {
        sum1 =(sum1%10) + (sum1/10);
        cout<<sum1<<endl;
    }
    
    else 
    {
       cout<<sum1<<endl; 
    }
    
    
    // Targil 16
    while(sum1!=999)
    {
        if(sum1==999)
            break;
    
        if(sum1!=999)
        {
            cout<<"enter an number\n";
            cin>>num;
            if(num==999)
              break;
            
           if(num<min) min=num;

           if(num>max) max=num;
        }
    
    }

cout<<"The max number is:"<<" "<<max<<endl;
cout<<"The min number is:"<<" "<<min<<endl;


    //Targil 19 
   if(min > max)
   {
       temp=min;
       min=max;
       max=temp;
   }
   while(num != 999)
   {
       
       if(num != 999)
       {
           if(num > max)
           {
             sec=max;
             max=num;
           }
           else
           {
               if(num > sec)
               {
                   sec = num;
               }
           }
       }
   }
   cout<<"The second number is:"<<" "<<min<<endl;;
   
   // Targil 20
   for(i=100 ; i<=999 ; i++)
    {
        if( (((i%10)%2) == 0) && ((((i%100)/10)%2) == 0) && (((i/100) %2) == 0) )
        {
            cout<<i<<endl;
        }
    }
    

    return 0;
}