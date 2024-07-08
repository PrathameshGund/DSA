#include <iostream>

using namespace std;

int minswap(int a[], int size, int coun) {
    for (int i = 0; i < size - 1; i++) {
        int midindex = i;

        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[midindex]) {
                midindex = j;
                coun = coun + 1;
            }
        }

        swap(a[midindex], a[i]);
    }

    return coun;
}

int main() {
    int size = 4;
    int coun = 0;
    int a[100] = {2, 3, 4, 5, 6};
    coun = minswap(a, size, coun);

    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }

    cout << "Number of swaps: " << coun << endl;
}
