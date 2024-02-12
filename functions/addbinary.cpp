#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input two binary numbers as strings
    string binaryNum1, binaryNum2;
    cout << "Enter the first binary number: ";
    cin >> binaryNum1;
    cout << "Enter the second binary number: ";
    cin >> binaryNum2;

    // Perform binary addition
    int decimal1 = stoi(binaryNum1, nullptr, 2);
    int decimal2 = stoi(binaryNum2, nullptr, 2);
    int sumDecimal = decimal1 + decimal2;

    // Convert the sum back to binary
    string sumBinary = bitset<32>(sumDecimal).to_string();

    // Print the result
    cout << "Sum of binary numbers: " << sumBinary.substr(sumBinary.find('1')) << endl;

    return 0;
}

/*

#include <iostream>
using namespace std;

int addBinaryNumbers(int binaryNum1, int binaryNum2) {
    int carry = 0;
    int result = 0;
    int multiplier = 1;

    while (binaryNum1 > 0 || binaryNum2 > 0 || carry > 0) {
        int bit1 = binaryNum1 % 10;
        int bit2 = binaryNum2 % 10;

        int sum = bit1 + bit2 + carry;
        int bitResult = sum % 2;
        carry = sum / 2;

        result += bitResult * multiplier;
        multiplier *= 10;

        binaryNum1 /= 10;
        binaryNum2 /= 10;
    }

    return result;
}

int main() {
    int binaryNum1, binaryNum2;
    cout << "Enter the first binary number: ";
    cin >> binaryNum1;
    cout << "Enter the second binary number: ";
    cin >> binaryNum2;

    int sumBinary = addBinaryNumbers(binaryNum1, binaryNum2);

    cout << "Sum of binary numbers: " << sumBinary << endl;

    return 0;
}

using functions

*/
