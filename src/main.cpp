#include <iostream>

using namespace std;

template <typename T>
class Archive
{
private:
  T data;

public:
  Archive(T data) : data{data} {};
  T data_please(void);
};

template <typename T>
T Archive<T>::data_please(void)
{
  return this->data;
}

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
  cout << bruno.age << endl;
  cout << bruno.get_age() << endl;
  Archive<string> old("password"); 
  cout << old.data_please() << endl;
}
