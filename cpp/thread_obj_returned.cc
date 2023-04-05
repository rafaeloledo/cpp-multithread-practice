#include <iostream>
#include <thread>

void hello() {
  std::cout << "Hello, Thread!\n";
}

std::thread func() {
  std::thread thr(hello);

  return thr;
}

int main() {
  std::thread thr = func();
  std::cout << "Received thread with ID " << thr.get_id() << '\n';

  thr.join();
}