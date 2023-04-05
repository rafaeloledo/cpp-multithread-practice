#include <exception>
#include <thread>
#include <iostream>

void hello() {
  try {
    throw std::exception();
  } catch (std::exception& e) {
    std::cout << "Caught exception in thread: " << e.what() << std::endl;
  }
  std::cout << "Hello, Thread\n";
}

int main() {
  std::thread thr(hello);

  thr.join();

  std::cout << "Finished\n";
}