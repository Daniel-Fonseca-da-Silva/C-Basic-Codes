#include <iostream>

using namespace std;

void funcao(int* n) // ponteiro
{
  *n = 20; // Variável que recebe ponteiro
}

int main()
{

  int n = 10;

  funcao(&n); // passando endereço

  cout << n << endl;

  return 0;
}
