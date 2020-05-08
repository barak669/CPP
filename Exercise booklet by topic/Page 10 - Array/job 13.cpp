#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int arr_counter[21] = {0};
    int i=0, counter=0;
    
    for (i=0; i<20; i++)
    {
        cout<<"enter number 1 or 0\n";
        cin>>arr[i];
        if(arr[i] != 1 && arr[i] != 0)
        {
            cout<<"Worng input - please enter 0 or 1\n";
            i--;
        }
    }
    
    for (i=0; i<20; i++)
    {
        if(arr[i] == 1)
        {
            while (arr[i] != 0)
            {
                counter++;
                i++;
            }
            
            arr_counter[counter]++;
            counter=0;
        }
    }
    
    for (i=0; i<21; i++)
    {
        if(arr_counter[i] != 0)
        {
            cout<<i<<' ' << arr_counter[i]<<endl;
        }
    }
    return 0;
}





