#include <iostream>
#include <cstring>
using namespace std;

void MySortString(char** arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    const int size = 5;
    char* arr[size] = {"banana", "apple", "orange", "grape", "kiwi"};

    MySortString(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}