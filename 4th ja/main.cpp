#include <iostream>

using namespace std;

int binarySearchLeft(int key, int a[], int size) {
    int start = 0;
    int end = size - 1;
    int leftside = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == a[mid]) {
            leftside = mid;
            end = mid - 1;
        } else if (key < a[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return leftside;
}

int binarySearchRight(int key, int a[], int size) {
    int start = 0;
    int end = size - 1;
    int rightside = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == a[mid]) {
            rightside = mid;
            start = mid + 1;
        } else if (key < a[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return rightside;
}

int main() {
    int size = 9;
    int key = 5;
    int a[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int leftside = binarySearchLeft(key, a, size);
    int rightside = binarySearchRight(key, a, size);

    cout << "Leftmost occurrence: " << leftside << endl;
    cout << "Rightmost occurrence: " << rightside << endl;

    return 0;
}
