#include <iostream>

using namespace std;

int num_global; // Variável global só deixa de existir quando o programa finaliza

int chamaGlobal();

int main()
{
  chamaGlobal();
  return 0;
}

int chamaGlobal()
{
  int num_global = 17;
  int num_local = 5;

  cout << "A variavel global possui o valor de " << num_global << endl;

  cout << "A variavel local possui o valor de " << num_local << endl;
}
