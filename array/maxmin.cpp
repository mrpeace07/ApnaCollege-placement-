#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m = a[0];
    int mi = a[0];

    for (int j = 1; j < n; j++)
    {
        m = max(m, a[j]);
        mi = min(mi, a[j]);
    }

    cout << "The max and minimum numbers are: " << m << " and " << mi << endl;
    return 0;
}
