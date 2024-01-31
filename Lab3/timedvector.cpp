#include <chrono>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int base = 1000000;
    vector<int> demo1;
    auto start = std::chrono::system_clock::now();

    for (int i = 0; i < base; i++) {
        demo1.push_back(i);
    }

    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    cout << "demo1 pushing done, Time elapsed: " << elapsed_seconds.count()
         << "s" << endl;

    start = std::chrono::system_clock::now();
    vector<int> demo2;
    for (int i = 0; i < 10 * base; i++) {
        demo2.push_back(i);
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end - start;
    cout << "demo2 pushing done, Time elapsed: " << elapsed_seconds.count()
         << "s" << endl;

    return 0;
}
