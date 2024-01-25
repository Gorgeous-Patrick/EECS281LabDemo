#include <iostream>
using namespace std;

int main() {
    int *pointer = new int[50];
    int array[50];
    cout << "Size of pointer: " << sizeof(pointer) << endl;
    cout << "Size of array: " << sizeof(array) << endl;
    delete[] pointer;
}
