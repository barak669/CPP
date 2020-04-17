#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
       int a[10], i;
       int n=2;
       
       
       for (i = 0; i<n; i++)
       {    
            cout << "Enter " << (i + 1) << "th Element :";
            cin >> a[i];
       }
       
       if( ((a[0]%10) + ((a[0]%100)/10) + ((a[0]%1000)/100) + ((a[0]%10000)/1000) + (a[0]/10000)) == ((a[1]%10) + ((a[1]%100)/10) + ((a[1]%1000)/100) + ((a[1]%10000)/1000) + (a[1]/10000)) )
       {
           cout<<"You enter twins numbers"<<endl;
       }
       else
       {
           cout<<"Worng numbers!!!"<<endl;
       }
 

    return 0;
}
