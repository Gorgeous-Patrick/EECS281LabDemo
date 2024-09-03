#include <iostream>
using namespace std;
int main(int argc, char * argv[]) {
    cout << "ARGC = " << argc << endl;
    for (size_t i = 0; i < argc; i++) {
        cout << "ARGV[" << i << "] = " << argv[i] << endl;
    }
}
