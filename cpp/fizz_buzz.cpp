#include <thread>
#include <iostream>
#include <vector>
#include <string>

class FizzBuzz {
public:
  std::vector<std::string> persons = {"Abdul", "Bart", "Claudia", "Divya"};
  void operator()() {
    for (int i = 1, j = 1; i <= 100; i++, j++) {
      if (j > 4) j = 1;
      std::string person;

      if (j == 1) person = persons[0];
      else if (j == 2) person = persons[1];
      else if (j == 3) person = persons[2];
      else person = persons[3];

      if (i % 3 == 0 && i % 5 == 0)
        std::cout << person << " says fizzbuzz!\n";
      else if (i % 3 == 0)
        std::cout << person << " says fizz!\n";
      else if (i % 5 == 0)
        std::cout << person << " says buzz!\n";
      else
        std::cout << person << " says " << i << std::endl;
    }
  }
};

int main () {
  FizzBuzz fb;

  std::thread thr (fb);

  thr.join();
}
