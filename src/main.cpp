#include <iostream>
#include <forward_list>
#include <map>

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

  cout << "*****\n"
       << endl;

  // standard implementation
  forward_list<int>
      sll;
  sll.push_front(1);
  sll.push_front(30);
  sll.push_front(29);
  for (auto i = sll.cbegin(); i != sll.cend(); i++)
  {
    cout << *i << endl;
  }

  cout << "*****\n"
       << endl;

  map<string, int> mp;
  mp["first"] = 1;
  mp["second"] = 2;
  mp["third"] = 3;

  cout << mp.find("second") << endl;
}