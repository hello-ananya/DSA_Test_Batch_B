#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int small = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < small)
            small = arr[i];
    }
    cout << "Smallest = " << small;
    return 0;
}