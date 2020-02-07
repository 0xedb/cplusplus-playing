#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

class SinglyLinkedList
{
private:
  Node *head = nullptr;

public:
  void add_to_front(int);
  void traverse(void);
};

void SinglyLinkedList::add_to_front(int data)
{
  Node *latest = new Node;
  latest->data = data;

  latest->next = head;
  head = latest;
}

void SinglyLinkedList::traverse()
{
  Node *current = head;
  while (current)
  {
    cout << current->data << endl;
    current = current->next;
  }
}

int main(void)
{
  SinglyLinkedList ll;
  ll.add_to_front(1);
  ll.add_to_front(30);
  ll.add_to_front(29);
  ll.traverse();
}