#include <iostream>
#include <deque>

// Fila que permite inserir tanto no começo quanto no final

using namespace std;

int main(int argc, char const *argv[])
{

  deque<int> fila;

  fila.push_front(17);
  fila.push_back(15);
  fila.push_front(26);

  //fila.pop_front(); // Remove 26

  std::cout << "Primeiro elemento: " << fila.front() << '\n';
  std::cout << "Terceiro elemento: " << fila.back() << '\n';

  return 0;
}
