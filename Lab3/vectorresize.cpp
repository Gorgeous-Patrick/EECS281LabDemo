#include <vector>
class HelloWorld {
    int num;

  public:
    HelloWorld(int _num) { num = _num; }
};

int main() {
    std::vector<HelloWorld> v;
    v.resize(10, 0);
    return 0;
}
