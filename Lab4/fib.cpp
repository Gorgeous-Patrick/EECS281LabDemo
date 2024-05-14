#include <iostream>
using namespace std;

template <int n> struct fibonacci {
  static long long const value =
      fibonacci<n - 1>::value + fibonacci<n - 2>::value;
};
template <> struct fibonacci<0> {
  static long long const value = 0;
};
template <> struct fibonacci<1> {
  static long long const value = 1;
};

int main() {
  cout << fibonacci<10>::value << endl;
  return 0;
}
