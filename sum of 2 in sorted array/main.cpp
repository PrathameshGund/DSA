#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0;
    int j = n - 1;
    int k;
    cout << "Enter the sum: ";
    cin >> k;

    while (i < j) {
        if (a[i] + a[j] == k) {
            cout << a[i] << " + " << a[j] << " = " << k << endl;
            i++;
            j--;
        } else if (a[i] + a[j] < k) {
            i++;
        } else {
            j--;
        }
    }

    return 0;
}
