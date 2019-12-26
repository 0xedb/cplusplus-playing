#include <iostream>

using namespace std;

int doubler(const int& x) {
  return x * 2;
}

int main(void)
{
  int first = 10;

  cout << doubler(first) << endl;
  cout << doubler(20) << endl;
}       