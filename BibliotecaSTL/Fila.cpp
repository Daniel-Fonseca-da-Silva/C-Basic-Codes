#include <iostream>
#include <queue> // Fila

using namespace std;

// Fila o primeiro elemento que entra é o primeiro que sai
// first in first out // igual um fila loterica

int main()
{

  queue<string> fila;

  fila.push("Caes"); // Insere
  fila.push("Gatos"); // Insere
  fila.push("Aves"); // Insere

  fila.pop(); // Remove sempre do começo

  std::cout << "Primeiro elemento da fila: " << fila.front() << '\n';
  std::cout << "Tamanho da fila: " << fila.size() << '\n';

  if(fila.empty())
  {
    std::cout << "Fila vazia" << '\n';
  }
  else
  {
    std::cout << "Fila cheia" << '\n';
  }

  return 0;
}
