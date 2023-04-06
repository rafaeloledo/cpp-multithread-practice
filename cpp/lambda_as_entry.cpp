#include <iostream>
#include <thread>

int main () {
  int i = 3;

  std::thread thr([&i] {
    i *= 2;
  });
  
  thr.join();

  std::cout << "the value of i is " << i << std::endl;
}
