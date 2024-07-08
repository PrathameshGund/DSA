#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            int j = i + 1;
            while (a[j] == a[i]) {
                j++;
            }
            cout << "Duplicate: " << a[i] << " at indices: ";
            for (int k = i; k < j; k++) {
                cout << k << " ";
            }
            cout << endl;
            i = j - 1;
        }
    }

    return 0;
}
