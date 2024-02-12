#include<iostream>
using namespace std;

int factorial(int n)
{
  
     int result = 1;
 
    for(int i=1; i<=n; i++)
    {
       result *= i;
    }
    cout << result;
}

int main()
{
     int x;
   cout<<"enter the number ";
    cin>>x;
    factorial(x);
    return 0;
}