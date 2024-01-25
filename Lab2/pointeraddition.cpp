#include <iostream>
using namespace std;

int main() {
    int *pointer = new int[50];
    cout << "pointer = " << pointer << endl;
    cout << "pointer + 1 = " << pointer + 1 << endl;
    delete[] pointer;
}
