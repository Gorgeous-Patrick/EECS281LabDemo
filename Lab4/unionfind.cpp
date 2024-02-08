// Wrong Union Find implementation
#include <iostream>
#include <vector>
using namespace std;
class UnionFind {
  private:
    vector<size_t> pnt;

  public:
    UnionFind(size_t size) {
        pnt.resize(size);
        for (size_t i = 0; i < size; i++) {
            pnt[i] = i;
        }
    }

    size_t find(size_t idx, size_t layer = 0) {
        if (pnt[idx] == idx) {
            return idx;
        }
        return pnt[idx] = find(pnt[idx], layer + 1);
    }

    void union_set(size_t lhs, size_t rhs) {
        size_t lroot = find(lhs);
        size_t rroot = find(rhs);
        pnt[rroot] = lroot;
    }

    void print() {
        for (auto &i : pnt) {
            cout << i << " ";
        }
    }
};

int main() {
    const size_t base = 10000000;
    UnionFind u(base);
    for (size_t i = 0; i < base - 1; i++) {
        u.union_set(i + 1, i);
    }

    cout << "Union Done" << endl;

    u.find(0);
}
