#include <iostream>

using namespace std;

int main()
{

  double* numero = NULL; // Ponteiro iniciado com NULL

  numero = new double; // Requer memória para variável

  *numero = 17; // Atribui valor

  cout << *numero << endl; // Exibe o valor

  delete numero; // Libera a memória

  return 0;
}
