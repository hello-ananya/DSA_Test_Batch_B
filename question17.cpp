#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp, rem, digits = 0;
    long sum = 0;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }
    if(sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
    return 0;
}