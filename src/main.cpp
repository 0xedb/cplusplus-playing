#include <iostream>

using std::cout;

template <typename T>
struct Node
{
  T data;
  T *next;
};

template <typename T>
class SinglyLinkedList
{
private:
  Node<T> *head;

public:
  SinglyLinkedList();
  void insert(T&);
};

template <class T>
void SinglyLinkedList<T>::insert(T& data)
{
}

template<class T>
SinglyLinkedList<T>::SinglyLinkedList() {
  head = new Node<T>{};
}

int main(void)
{
SinglyLinkedList<std::string> sll;
  return 0;
}