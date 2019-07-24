#include <iostream>

using namespace std;

int main()
{

  int n1, n2, soma, sub, mult, div, modulo;
  int expressao;

  n1 = 10;
  n2 = 20;

  soma = n1 + n2;
  sub = n1 - n2;
  mult = n1 * n2;
  div = n2 / n1;
  modulo = n2 % n1;
  expressao = n1 * (n2 + n1);

  cout << "A soma " << soma << endl << "\n";
  cout << "A subtracao " << sub << endl << "\n";
  cout << "A multiplicao " << mult << endl << "\n";
  cout << "A divisao " << div << endl << "\n";
  cout << "o resto " << modulo << endl << "\n";
  cout << "o resto " << expressao << endl << "\n";

  return 0;
}
