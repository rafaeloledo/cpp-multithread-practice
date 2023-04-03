#include <iostream>
#include <thread>
#include <string>

void func (std::string&& str) {
  std::cout << "Ownership of \"" << str << "\" transferred to thread" << '\n';
}

int main () {
  std::string str = "moveable";
  std::cout << "Starting thread" << '\n';

  std::thread thr (func, std::move(str));
  thr.join();

  std::cout << "Do i still have any data?" << ' ';
  std::cout << (str.empty() ? "No" : "Yes") << ".\n";
}
