#include <iostream>

using std::cout;

auto do_crazy(int) -> std::string;

auto callback(int, int (*func)(int)) -> int;

int doubler(const int a) {
  return a * 2;
}

int main(void) {
  cout << "hello" << std::endl;
  cout << callback(50, doubler) << std::endl;
  return 0;
}

auto callback(int a, int (*func)(int)) -> int {
  return func(a);
}