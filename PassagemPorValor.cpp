#include <iostream>

using namespace std;

void funcao(int n)
{
  n = 20;
}

int main()
{

  int n = 10;

  funcao(n); // passando valor 10

  cout << n << endl;

  return 0;
}
