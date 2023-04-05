#include <exception>
#include <iostream>
#include <thread>

void hello() {
  throw std::exception();

  std::cout << "Hello, Thread\n";
}

int main() {
  try {
    std::thread thr(hello);
    thr.join();
  } catch (const std::exception& e) {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }

  std::cout << "Still running" << std::endl;
}