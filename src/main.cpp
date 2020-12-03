#include <iostream>
#include <thread>
#include <vector>
#include <unordered_map>

using namespace std; 
using vec = vector<int>; 
using mp = unordered_map<char, vec>;

void say(char from, char to) {
  cout << "from " << from << " to " << to << '\n';
}


void toh(int n, char from, char via, char to, mp& seen) {
  if(n == 1) {
    say(from, to);
    seen[to].push_back(seen[from].back());
    seen[from].pop_back();
  } else {
    toh(n - 1, from, to, via, seen);
    say(from, to);

    seen[to].push_back(seen[from].back());
    seen[from].pop_back();
    toh(n - 1, via, from, to, seen);
  }
}


int main() { 
vec A {5, 4, 3, 2, 1}, B {}, C {};

mp seen {
  {'a', A}, 
  {'b', B},
  {'c', C}
  };


  toh(seen['a'].size(), 'a', 'b', 'c', seen);

  // after
  cout << "\n\n\n";
  cout << "Ans:: ";
  for(const auto i : seen['c'])
  cout << i << '\t';
  cout << '\n';
}