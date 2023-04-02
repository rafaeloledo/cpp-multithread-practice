#include <thread>
#include <iostream>

void hello () {
  std::cout << "Hello, Thread!\n";
}

int main () {
  std::thread thr (hello);

  thr.join();
}
