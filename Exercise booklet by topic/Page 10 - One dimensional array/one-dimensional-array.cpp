
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    int i=0;
    
    cout<<"enter word\n";
    gets(str);
    
    for (i=0; i<strlen(str)/2; i++)
    {
        if (str[i] != str[strlen(str)-1-i])
        {
            cout<<"no\n";
            break;
        }
    }
    
    if (i == strlen(str)/2)
    {
        cout<<"yes\n";
    }

    return 0;
}
