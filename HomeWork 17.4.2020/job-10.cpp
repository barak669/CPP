#include <iostream>
using namespace std;


int
main ()
{
  int firstNum, secondNum, thirdNum, temp;
  cout << "Enter first number: ";
  cin >> firstNum;
  cout << "Enter second number: ";
  cin >> secondNum;
  cout << "Enter third number: ";
  cin >> thirdNum;



  if (firstNum > secondNum && secondNum > thirdNum)
    {
      cout << thirdNum << " " << secondNum << " " << firstNum;
    }
  else if (firstNum > thirdNum && thirdNum > secondNum)
    cout << secondNum << " " << thirdNum << " " << firstNum;
  else if (secondNum > firstNum && firstNum > thirdNum)
    cout << thirdNum << " " << firstNum << " " << secondNum;
  else if (secondNum > thirdNum && thirdNum > firstNum)
    cout << firstNum << " " << thirdNum << " " << secondNum;
  else if (thirdNum > firstNum && firstNum > secondNum)
    cout << secondNum << " " << firstNum << " " << thirdNum;
  else
    cout << firstNum << " " << secondNum << " " << thirdNum;

  return 0;
}
