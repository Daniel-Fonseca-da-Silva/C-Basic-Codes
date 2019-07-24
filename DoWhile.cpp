#include <iostream>

using namespace std;

int main()
{

  int i = 0;

  // Executa pelo menos 1 vez independentemente da condição ser verdadeira ou não
  do // Repita
  {
    cout << "Não logo mais no Facebook " << i << endl;
    i++;
  }
  while(i <= 100); // Enquanto i for menor que 100

  return 0;
}
