#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
       int a[10], i;
       int n=1000;
       
       
       for (i = 0; i<n; i++)
       {    
            cout << "Enter " << (i + 1) << "th Element :";
            cin >> a[i];
            
            if(a[i]==999)
            {
                break;
                
            }
            
       }
       cout<<a[1]<<endl;
 

    return 0;
}