#include <iostream>
using namespace std;

void fibbanoci( int x)
{
    int t1=0,  t2=1;
    int next;

    for ( int i=1; i<= x; i++)
    {
        cout << t1<<",";
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    return ;
}

int main()
{
    int n;
    cout << " enter the value of n ";
    cin >> n;

    fibbanoci(n);

    return 0;
}