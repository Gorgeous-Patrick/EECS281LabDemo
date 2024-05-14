#include <iostream>
using namespace std;

class Functor {
public:
  void operator()() { cout << "Functor Called" << endl; }
};

int main() {
  cout << "Operation 1" << endl;
  auto f = Functor();
  cout << "Operation 2" << endl;
  f();
}
