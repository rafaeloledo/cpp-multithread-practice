#include <iostream>
#include <thread>

int main () {
  std::thread thr(
    [] (int i1, int i2) {
      std::cout << i1 + i2 << '\n';
    },
    2, 3
  );

  thr.join();
}
