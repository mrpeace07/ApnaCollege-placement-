 #include <iostream>
 using namespace std;

 int main()
 {
    int n;
    cin >> n;
int armstrongno = 0;
int i = n;
    while ( n>0)
    {
        
        int digit = n % 10;
         armstrongno += (digit*digit*digit);
         n = n/10;

    }

    if ( i == armstrongno)
    {
        cout << " it is a armstrrong number";

    }
    else{
        cout<<"not a armstrong number" ;
    }
    return 0;
 }