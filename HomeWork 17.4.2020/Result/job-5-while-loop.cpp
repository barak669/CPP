#include<iostream>
using namespace std;

int main()
{
   int num=0, sec, temp, max; 
   cout<<"enter first number\n";
   cin>>max;
   cout<<"enter second number\n";
   cin>>sec;
   
   if(sec > max)
   {
       temp=sec;
       sec=max;
       max=temp;
   }
   while(num != 999)
   {
       cout<<"enter number\n";
       cin>>num;
       
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
   cout<<"result: "<<sec<<endl;
   
 

    return 0;
}

