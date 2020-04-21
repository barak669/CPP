#include<iostream>
using namespace std;

int main()
{
       int num1, num2, sum1=0, sum2=0;
       
       
        cout << "Enter first number\n";
        cin >> num1;
        
        cout << "Enter second number\n";
        cin >> num2;
       
       
       while(num1!=0)
       {
          if((num1%10) <= 9)
          {
             sum1 = sum1 + num1%10;
          }
        
          num1 = num1/10;
       }
       
       while(num2!=0)
       {
          if((num2%10) <= 9)
          {
             sum2 = sum2 + num2%10;
          }
        
          num2 = num2/10;
       }
       
       if (sum1==sum2)
       {
           cout<<"You enter twins number!\n";
       }
        
       else
       {
           cout<<"Worng numbers!!!\n";
       }
 

    return 0;
}


