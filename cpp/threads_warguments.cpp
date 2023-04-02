#include <iostream>
#include <thread>

void hello(std::string str) {
  std::cout << str << std::endl; 
}

int main () {
  std::thread thr(hello, "Hello, Thread!");

  thr.join();
}
