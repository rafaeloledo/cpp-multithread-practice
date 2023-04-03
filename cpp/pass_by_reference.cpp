#include <iostream>
#include <thread>
#include <string>

void hello (std::string& str) {
  std::cout << "Hello, " << str << std::endl;
}

int main () {
  std::string str = "abc";

  std::thread thr(hello, std::ref(str));

  thr.join();

  return 0;
}
