#include <iostream>
#include <thread>

class greeter {
public:
  void hello() {
    std::cout << "Hello, Member Function Thread!\n";
  }
};

int main () {
  greeter greet;

  std::thread thr(&greeter::hello, &greet);

  thr.join();

  return 0;
}
