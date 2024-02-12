/*
1
1 1
1 2 1
1 3 3 1
pascal triangle
*/

#include <iostream>
using namespace std;

int fact(int x){

int fact=1;
for ( int i=2;i<=x;i++)
fact *= i;
return fact;
}

int main() 
{
int i, j;

int n;
cin >> n;

for (i = 0; i <n; i++)
{
    for (j = 0; j <= i; j++)
    {
        cout << fact(i) / (fact(j) * fact(i - j)) <<" ";
    }
    cout << endl;
}
}