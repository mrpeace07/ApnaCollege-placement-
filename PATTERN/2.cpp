#include <iostream>
using namespace std;

int main()
{
    int row , col , j;
cin >> row >> col ;

for ( int i =1 ; i<=row ; i++)
{
    for (  j=1 ; j<=col ; j++)
    {
    if ( i == 1 || i == row )
    cout << "*" ;
    else if (j == 1 || j == col  )
    {
        /* code */cout << "*";
    }
    
    else {
    cout << " " ;
    }
    }

cout<< endl;
}
return 0;
}

/*
output for hollow rectange
4 3
***
* *
* *
*** */
  
