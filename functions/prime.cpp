#include<iostream>
using namespace std;

bool isprime(int x)
{
for ( int j=2 ; j<=x; j++)
{
    if(x % j == 0)
    {
        return false;
    }
}
return true;
}

int main()
{
    int a, b;
    cout << " enter two numbers : "<<endl;
    cin >>a>> b;
    for ( int i=a ; i<=b; i++)
    {
        if (isprime(i))
        {
            cout << i;

        }
    }
}