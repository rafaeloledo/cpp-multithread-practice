#include <thread>
#include <iostream>

class FizzBuzz {
public:
  void operator()() {
    for (int i = 0; i <= 100;i++) {
      if (i % 3 == 0 && i % 5 == 0)
        std::cout << "FizzBuzz\n";
      else if (i % 3 == 0)
        std::cout << "Fizz\n";
      else if (i % 5 == 0)
        std::cout << "Buzz\n";
      else
        std::cout << i << std::endl;
    }
  }
};

int main () {
  FizzBuzz fb;

  std::thread thr (fb);

  thr.join();
}
