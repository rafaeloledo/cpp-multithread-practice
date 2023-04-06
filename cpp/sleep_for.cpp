#include <thread>
#include <iostream>

using namespace std::literals;

void hello() {
  std::this_thread::sleep_for(2s);

  std::cout << "Hello, Thread!\n";
}

int main() {
  std::cout << "Starting thread...\n";
  std::thread thr(hello);

  thr.join();
}