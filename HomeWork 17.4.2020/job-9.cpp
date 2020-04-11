#include <iostream>
using namespace std;

int main ()
{
  
  int i;
  int num[10];
  
  for (int i = 0; i< 10; i++)
  {
    cin>>num[i];
    
  }
  
  for (int i = 0; i< 10; i++)
  {

    if(num[i]>=90 && num[i]<=100)
        cout<<num[i]<<" ";
        
    if(num[i]<=55)
        cout<<num[i]<<" ";
   
  }
  
  
  return 0;
}

