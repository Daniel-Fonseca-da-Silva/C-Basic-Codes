#include <iostream>
#include <stack> // pilha

// Pilha retira o primeiro elemento do topo
// Primeiro que entra é o último que sai (first in last out)

using namespace std;

int main()
{
	stack<double> pilha;

	pilha.push(3.14);
	pilha.push(5.123);
	pilha.push(10.56);

	pilha.pop(); // Retira 3.14 do topo

	cout << "Topo: " << pilha.top() << endl;
	cout << "Tamanho da pilha: " << pilha.size() << endl;

  if(pilha.empty())
  {
    std::cout << "Pilha vazia: " << '\n';
  }
  else
  {
    std::cout << "Pilha não vazia: " << '\n';
  }

	return 0;
}
