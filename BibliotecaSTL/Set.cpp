#include <iostream>
#include <set>

using namespace std;

// Set é um conjunto e não aceita elementos repetidos

int main(int argc, char const *argv[])
{

  set<int> conjunto;

  conjunto.insert(10);
  conjunto.insert(10);// Repetido não aparece
  conjunto.insert(20);
  conjunto.insert(20); // Repetido não aparece
  conjunto.insert(30);

  set<int>::iterator it;

  for (it = conjunto.begin(); it != conjunto.end(); it++)
  {
    std::cout << *it << endl;
  }

  std::cout << "Tamanho do conjunto " << conjunto.size() << '\n';

  return 0;
}
