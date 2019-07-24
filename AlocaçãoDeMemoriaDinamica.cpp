#include <iostream>

using namespace std;

int main()
{

  char* nome = new char[256]; // Alocação fora da pilha

  nome[0] = 'D';
  nome[1] = 'a';
  nome[2] = 'n';
  nome[3] = 'i';
  nome[4] = 'e';
  nome[5] = 'l';

  cout << *nome << endl;

  delete[] nome; // Retorna alocação para memória pilha
  nome = NULL;// Zera ponteiro apagando bloco do ponteiro

  return 0;
}
