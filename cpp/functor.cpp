#include <thread>
#include <iostream>

class Hello {
  public:
    void operator()() {
      std::cout << "Hello, Functor Thread!\n";
    }
};

int main () {
  Hello hello;

  std::thread thr (hello);

  thr.join();
}
