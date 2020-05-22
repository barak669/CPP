
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    int i=0;
    char letter;
    
    cout<<"enter string\n";
    gets(str);
    
    cout<<"enter char\n";
    cin>>letter;
    
    for (i=0; i<strlen(str)-1; i++)
    {
        if((i == 0 && str[i] == letter) || (str[i] == ' ' && str[i+1] == letter))
        {
            i++;
            while(str[i] != ' ' && str[i] != '\0')
            {
                cout<<str[i];
                i++;
            }
            i--;
            cout<<endl;
        }
    }

    
    
    
    

    return 0;
}
