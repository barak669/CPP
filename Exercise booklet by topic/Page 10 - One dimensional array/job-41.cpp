#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,x;
    char ch[100];
    cout<<"Enter your string: ";
    gets(ch);

    for(i = 0; i <= strlen(ch); i++)
    {
        for(j = 1; j < i; j++)
        {
            
        }
        for(x=i; x<=strlen(ch)-1; x++)
        {
            cout<<ch[x];
        }
        cout<<"\n";
    }

    return 0;
}
