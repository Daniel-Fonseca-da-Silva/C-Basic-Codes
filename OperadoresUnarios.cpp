#include <iostream>

using namespace std;

int main()
{

  int num = 10;
  int numB = 20;

  int numC = 2, numD = 5;

  cout << num++ << endl;//Operador de pró incremento
  cout << num << endl;

  cout << "\n";

  cout << ++numB << endl;//Operador de pré incremento
  cout << numB << endl;

  cout << "\n";

  numC = numC + 2; // NumC recebe o próprio valor que é 2 mais outros 2 ficando 4;
  cout << numC << endl;

  cout << "\n";

  numD += 2; // NumD recebe o próprio valor que é 5 mais outros 2 ficando 7;
  cout << numD << endl;

  return 0;
}
