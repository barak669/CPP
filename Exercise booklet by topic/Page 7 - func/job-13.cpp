#include<iostream>
using namespace std;

void func(int rows)
{
    int i, j, k,n, val=1;
    
    for (i = 0; i < rows; i++)
    {
        int val = 1;
        for (j = 1; j < (rows - i); j++)
        {
            cout <<"  ";
        }
        for (k = 0; k <= i; k++)
        {
            cout <<" "<< val;
            val++;
        }
        int val2 = i;
        for (n = 1; n < rows; n++)
        {
            if(val2<=0)
            {
                break;
            }
            
            cout <<" "<<val2;
            val2--;
            
        } 
        
        cout << endl << endl;
    }
    cout << endl;
    
}
 
int main()
{
    int rows, i, j, k, val=1;
    cout << "Enter the number of rows : ";
    cin >> rows;
    func(rows);
    
 
    
    return 0;
}

