#include <iostream>
#include <cmath>
using namespace std;

int hexCharToDecimal(char hexChar) {
    if (hexChar >= '0' && hexChar <= '9') {
        return hexChar - '0';
    } else if (hexChar >= 'A' && hexChar <= 'F') {
        return hexChar - 'A' + 10;
    } else if (hexChar >= 'a' && hexChar <= 'f') {
        return hexChar - 'a' + 10;
    } else {
        return -1; // Invalid character
    }
}

int hexToDecimal(string hexNumber) {
    int decimalNumber = 0;
    int power = hexNumber.length() - 1;

    for (char hexChar : hexNumber) {
        int digit = hexCharToDecimal(hexChar);
        if (digit == -1) {
            cout << "Invalid hexadecimal number." << endl;
            return -1;
        }

        decimalNumber += digit * pow(16, power);
        power--;
    }

    return decimalNumber;
}

int main() {
    string hexNumber;
    cout << "Enter a hexadecimal number: ";
    cin >> hexNumber;

    int decimalNumber = hexToDecimal(hexNumber);

    if (decimalNumber != -1) {
        cout << "Decimal equivalent: " << decimalNumber << endl;
    }

    return 0;
}


/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string hexNumber;
    cout << "Enter a hexadecimal number: ";
    cin >> hex >> hexNumber;

    int decimalNumber = strtol(hexNumber.c_str(), nullptr, 16);

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}

strol function automatically converts it.

*/