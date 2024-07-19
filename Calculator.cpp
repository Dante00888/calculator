# include <iostream>
# include <string>

using namespace std;
int main()
{
    int Addition,Subtraction,Division,Multiplication;
    int num1, num2;
    char Operation;
    int result;

  cout << "Enter num1:" ;
  cin >> num1;

    cout<<"Enter num2: ";
    cin>>num2;

     cout<<"Enter Character :(+,-,*,/)";
     cin>>Operation;

switch (Operation)
{
case '+':
        result = num1 + num2;
    cout<<"result"<<result<<endl;
    break;
case '-':
        result= num1 - num2;
        cout<<"result"<<result<<endl;
    break;
case '/':
    if(num2 !=0)
    {
         result = num1/num2;
        cout<<"result"<<result<<endl;
    }
    else
    {
        cout<<"Error input reveals an infinite value"<<endl;
    }
    break;


case '*':
        result = num1 * num2;
        cout<<"result"<<result<<endl;
    break;

default:
    cout<<"Invalid operation"<<endl;
    break;
}
    return 0;
}



