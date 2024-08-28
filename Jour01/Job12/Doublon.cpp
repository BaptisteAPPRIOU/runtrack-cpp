#include <iostream>
using namespace std;

int doubleArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        *(arr + i) *= 2;
        sum += *(arr + i);
    }
    return sum;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before doubling: ";
    printArray(arr, size);

    int sum = doubleArray(arr, size);

    cout << "Array after doubling: ";
    printArray(arr, size);

    cout << "Sum of doubled elements: " << sum << endl;

    return 0;
}