#include <thread>
#include <iostream>

void hello() {
  std::cout << "Hello from thread with ID " << std::this_thread::get_id() << '\n';
}

int main() {
  std::cout << "Main thread has ID " << std::this_thread::get_id() << '\n';

  std::thread thr(hello);

  std::cout << "Hello thread has ID " << thr.get_id() << '\n';

  thr.join();

  std::cout << "Hello thread has ID " << thr.get_id() << '\n';
}