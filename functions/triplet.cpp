#include <iostream>
#include<math.h>
using namespace std;

int fmax(int x , int y, int z)
{
int m = max(x, max(y,z)) ;
int b,c;
if (m == x)
{
    b =y;
    c = z;
}
else if (m == y)
{
    b= x;
    c = z;
}
else
{
b= x;
c=y;
}
if (pow(m,2)== (pow(b,2)+(pow(c,2))))
   {
    cout << "it is a triplet";
   }
   else
   {
    cout <<"not a triplt";
   }
}



int main()
{
int a, b, c;
cin >> a >> b >> c;

fmax(a,b,c);

return 0;
}