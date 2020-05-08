#include<iostream>
using namespace std;

int main()
{
    int i, num, temp, place=0;
    
    cout<<"enter numbers\n";
    cin>>num;
    
    for (i=0; i<=9; i++)
    {
        temp = num;
        
        while(num!=0)
        {
            if(num%10 == i)
            {
                cout<<place<<" ";
            }
            place++;
            num = num/10;
        }
        num = temp;
        place = 0;
        
    }

    return 0;
}

