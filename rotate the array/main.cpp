#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the array size:";
    cin >> n;
    cout << "Enter the elements of array:";
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Enter the no. of times to right shift:";
    cin >> k;

    // Perform right rotation k times
    for (int shift = 0; shift < k; shift++) {
        int temp = a[n - 1]; // Store the last element

        // Shift elements to the right
        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        // Place the stored element at the beginning
        a[0] = temp;
    }

    cout << "Array after " << k << " right shifts: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
