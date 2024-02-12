#include<iostream>
using namespace std;

int sum(int x)
{
    int result = (x*(x+1))/2 ;
    cout << "result : " <<result;
    return result;
    
}

int main()
{
    int n;
    cin>>n;

    sum(n);
    return 0;
}