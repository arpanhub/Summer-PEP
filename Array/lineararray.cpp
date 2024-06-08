#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int result = linearSearch(arr, size, key);

    if (result == -1) {
        cout << "Element found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}