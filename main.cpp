#include <iostream>
using namespace std;

int main() {
    int choice, n;

    cout << "=== C++ Number Toolkit ===\n";
    cout << "1. Check Prime Number\n";
    cout << "2. Find Factorial\n";
    cout << "3. Reverse a Number\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter a number: ";
    cin >> n;

    switch (choice) {
        case 1: {
            if (n < 2) {
                cout << "Not a prime number\n";
                break;
            }

            bool prime = true;
            for (int i = 2; i <= n / i; i++) {
                if (n % i == 0) {
                    prime = false;
                    break;
                }
            }

            cout << (prime ? "Prime number" :
                     "Not a prime number") << '\n';
            break;
        }

        case 2: {
            if (n < 0 || n > 20) {
                cout << "Enter a number from 0 to 20\n";
                break;
            }

            unsigned long long fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }

            cout << "Factorial = " << fact << '\n';
            break;
        }

        case 3: {
            long long num = n;
            long long rev = 0;

            while (num != 0) {
                rev = rev * 10 + num % 10;
                num /= 10;
            }

            cout << "Reversed number = " << rev << '\n';
            break;
        }

        default:
            cout << "Invalid choice\n";
    }

    return 0;
}
