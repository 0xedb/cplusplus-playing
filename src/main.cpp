#include <iostream>

using namespace std;

class Human
{
private:
  string secret;

public:
  string name;
  int age;
  Human(const string &secret, const string &name, const int &age) : secret(secret), age(age), name(name) {}
  ~Human();
  Human &operator+(const int &);
};

Human::~Human()
{
  cout << "Destructor called\n";
}

Human &Human::operator+(const int &num)
{
  this->age = this->age + num;
}

int main(void)
{
  Human bruno("sersdaf", "Bruno Edoh", 232);
  cout << bruno.name << endl;
  bruno + 20;
  cout << bruno.age << endl;
}