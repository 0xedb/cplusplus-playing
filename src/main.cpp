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
  ~Human()
  {
    cout << "Destructor called\n";
  }
};

int main(void)
{
  Human bruno("sersdaf", "Bruno Edoh", 232);
  cout << bruno.name << endl;
  cout << bruno.age << endl;
}