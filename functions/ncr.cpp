#include <iostream>
using namespace std;

int fact(int x)
{
    int result = 1;
for(int i=1; i<=x ; i++)
{
  result *= i;
}
return result; 

}



int main()
{
    int n,r;
    cout<< "enter the value of n and r "<<endl;
    cin >> n >> r;

    int ans = fact(n) / (fact(r) * fact(n-r));
    cout << ans;
    return 0;

}