#include <bitset>
#include <iostream>
#include <vector>

class BloomFilter {
private:
  std::bitset<32768> bitset;
  size_t hash1(const std::string &key) {
    size_t hash = 0;
    for (char c : key) {
      hash = 31 * hash + c;
      hash = hash % 32768;
    }
    return hash % 32768;
  }

  size_t hash2(const std::string &key) {
    size_t hash = 0;
    for (char c : key) {
      hash = 17 * hash + c;
      hash = hash % 32768;
    }
    return hash % 32768;
  }

  size_t hash3(const std::string &key) {
    size_t hash = 0;
    for (char c : key) {
      hash = 19 * hash + c;
      hash = hash % 32768;
    }
    return hash % 32768;
  }

public:
  void add(const std::string &key) {
    size_t hashValue1 = hash1(key);
    size_t hashValue2 = hash2(key);
    size_t hashValue3 = hash3(key);
    bitset.set(hashValue1);
    bitset.set(hashValue2);
    bitset.set(hashValue3);
  }

  bool possiblyContains(const std::string &key) {
    size_t hashValue1 = hash1(key);
    size_t hashValue2 = hash2(key);
    size_t hashValue3 = hash3(key);
    return bitset.test(hashValue1) && bitset.test(hashValue2) &&
           bitset.test(hashValue3);
  }
};

int main() {
  BloomFilter filter;

  filter.add("hello");
  filter.add("world");

  std::cout << "hello: " << (filter.possiblyContains("hello") ? "Yes" : "No")
            << std::endl;
  std::cout << "world: " << (filter.possiblyContains("world") ? "Yes" : "No")
            << std::endl;
  std::cout << "bloom: " << (filter.possiblyContains("bloom") ? "Yes" : "No")
            << std::endl;

  return 0;
}
