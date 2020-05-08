#include <iostream>
using namespace std;


int func(int num, int n)
{
    int sum = 0;
    
    while(num!=0 && n!=0)
    {
        sum = sum+num%10;
        num = num/10;
        n--;
    }
    return sum;
}

int main()
{
    int num, n, result;
    
    cout<<"enter number\n";
    cin>>num;
    cout<<"enter number\n";
    cin>>n;
    
    result = func(num, n);
    cout<<result<<endl;
    
    return 0;
}



