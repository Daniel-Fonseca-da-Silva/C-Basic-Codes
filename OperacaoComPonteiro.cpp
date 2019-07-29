#include <iostream>

using namespace std;

int main()
{

  int vetor[] = {1, 2, 3, 4};
  int* ponto;
  int tamVetor = sizeof(vetor) / sizeof(int);
  int i = 0;

  ponto = &vetor[0];

  while(i < tamVetor)
  {
    cout << *ponto++ << endl;
    i++;
  }

  char nome[] = "Daniel";
  char* vetorNome;

  // vetor nome recebe o endereco de vetor
  // Sabendo o primeiro sabe-se o resto
  // enquanto vetorNome for diferente de \0 fim do array
  for(vetorNome = &nome[0]; *vetorNome != '\0'; vetorNome++)
  {
    cout << *vetorNome;
  }

  return 0;
}
