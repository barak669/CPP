#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
       int a[10], i, sum1=0, sum2=0;
       int n=2;
       
       
       for (i = 0; i<n; i++)
       {    
            cout << "Enter " << (i + 1) << "th Element :";
            cin >> a[i];
       }
       
       while(a[0]!=0)
       {
          if((a[0]%10) <= 9)
          {
             sum1 = sum1 + a[0]%10;
          }
        
          a[0] = a[0]/10;
       }
       
       while(a[1]!=0)
       {
          if((a[1]%10) <= 9)
          {
             sum2 = sum2 + a[1]%10;
          }
        
          a[1] = a[1]/10;
       }
       
       if (sum1==sum2)
       {
           cout<<"You enter twins number!\n"<<endl;
       }
        
       else
       {
           cout<<"Worng numbers!!!\n"<<endl;
       }
 

    return 0;
}

