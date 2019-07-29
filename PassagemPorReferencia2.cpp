#include <iostream>

using namespace std;

void funcao(int &n)
{
  n = 110;
}

int main()
{

  int n = 10;
  int a = 35;

  int &b = a; // Passo o valor de a '35' para variável b

  funcao(n);

  cout << n << endl;

  cout << b << endl; // Exibindo valor da variável b



  return 0;
}
