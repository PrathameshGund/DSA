#include <iostream>

using namespace std;

int main() {
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    int a[6] = {1, 5, 10, 20, 40, 80};
    int b[5] = {6, 7, 20, 80, 100};
    int c[8] = {3, 4, 15, 20, 30, 70, 80, 120};

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << endl;
            i++;
            j++;
            k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }

    return 0;
}
