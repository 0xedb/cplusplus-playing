#include <iostream>

using namespace std;

class Human
{
private:
  string secret;

public:
  string name;
  int age;
  int get_age() const { return age; };
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
  const Human bruno("sersdaf", "Bruno Edoh", 232);
  cout << bruno.name << endl;
  // bruno + 20;
  // bruno.age = 10;
  cout << bruno.age << endl;
  cout << bruno.get_age() << endl;
}
