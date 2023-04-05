#include <iostream>
#include <thread>

void hello() {
  using namespace std::literals;

  std::this_thread::sleep_for(1s);
  std::cout << "Hello, Thread!\n";
}

void func(std::thread&& thr) {
  std::cout << "Received the thread with ID " << thr.get_id() << std::endl;

  thr.join();
}

int main() {
  std::thread thr(hello);

  std::cout << "Hello thread has ID " << thr.get_id() << '\n';

  func(std::move(thr));
}