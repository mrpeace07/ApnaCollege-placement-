#include <bits/stdc++.h>
using namespace std;

void insert(int n, int a[])
{
    for(int i=1; i<n ; i++)
    {
        int k = a[i];
        int j = i -1;

        while( j >= 0 && a[j] < k)// when this condition is false we declare k value to j+1
        {
            a[j+1]= a[j];
            j-- ; // this loop os uded to check from end to begining of sorted array
        }

        a[j+1]= k;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    insert(n,a);

    for(int i=0; i< n; i++)
    {
        cout << a[i ] << " ";
    }
}
