#include <thread>
#include <iostream>

int main () {
  std::thread thr([]() {
    std::cout << "Hello, Lambda Thread!\n";
  });

  thr.join();
}
