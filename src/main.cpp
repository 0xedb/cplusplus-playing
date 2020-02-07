#include <iostream>

using namespace std;

void callback(int x, int (*fn)(int)) {
  cout << fn(x) << endl;
}

int func(int b) {
  return b * 2;
}

int main(void) { 
  callback(20, func);
  return 0;
}