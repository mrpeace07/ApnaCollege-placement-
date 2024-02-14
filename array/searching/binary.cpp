#include<bits/stdc++.h>
using namespace std;

int binarysearch(int n, int a[], int k) {
    int ub = n - 1;
    int lb = 0;
    int mid;
    
    while (lb <= ub) {
        mid = lb + (ub - lb) / 2;

        if (k == a[mid]) {
            return mid;
        } else if (k < a[mid]) {
            ub = mid - 1;
        } else {
            lb = mid + 1;
        }
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int result = binarysearch(n, a, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not present in the array." << endl;
    }

    return 0;
}
