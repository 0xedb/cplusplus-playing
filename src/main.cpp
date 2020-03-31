#include <iostream>

class B
{
private:
  double amount;

public:
  B(double amount = 0.0) : amount{amount} {}
  double getAmount()
  {
    return amount;
  }
};
class A
{
private:
  int amount;

public:
  A(int amount = 0) : amount{amount} {};
  operator B()
  {
    return B(amount * 2);
  }
};

int main(void)
{
  A a(-45);
  B b(-3);
  b = a;
  std::cout << b.getAmount() << "\n";
}