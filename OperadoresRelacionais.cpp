#include <iostream>

using namespace std;

int main(){

  int numA, numB;

  numA = 30;
  numB = 35;

  bool decision;

  decision = numA > numB; // returno 0 false
  cout << decision << " falso " << endl << '\n';

  decision = numA < numB; // retorna 1 true
  cout << decision << " verdadeiro "<< endl << '\n';

  if(numA > numB)// Se numA for maior que numB
  {
    cout << numA << " é maior que " << numB << endl << '\n';
  }
  else if(numA < numB) // Se numA for menor que numB
  {
    cout << numA << " é menor que " << numB << endl << '\n';
  }
  else // Se numA for igual a numB
  {
    cout << numA << " é igual a " << numB << endl << '\n';
  }

  if(numA != numB)// Senão então é diferente
  {
    cout << numA << " é diferente de " << numB << endl;
  }

  return 0;
}
