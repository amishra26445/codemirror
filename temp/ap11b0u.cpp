#include <iostream>
using namespace std;
int main() {
    int n=5;
    long factorial = 1.0;
    cout << "Enter a positive integer: ";
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
    return 0;
}