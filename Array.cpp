#include <iostream>

using namespace std;

int main()
{

  int vetor[] = {10, 5, 3, 4, 8, 9, 25, 12, 235};
  char nome[] = {'D', 'a', 'n', 'i', 'e', 'l'};
  int tam, tamNome;


  tam = sizeof(vetor) / sizeof(int); // Calculo para buscar o tamanho de um vector
  tamNome = sizeof(nome) / sizeof(char);

  for(int i = 0; i < tam; i++)
  {
      cout << "Indice -> " << i << " valor -> " << vetor[i] << endl;
  }

  for(int i = 0; i < tamNome; i++)
  {
    cout << nome[i];
  }

  return 0;
}
