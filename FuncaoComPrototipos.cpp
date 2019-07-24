#include <iostream>

using namespace std;

double multiplicacao(double x, double y);

int main()
{
  cout << "Chamando funcao com prototipo, resultado da multiplicacao " << multiplicacao(5, 5) << endl;
  return 0;
}

// Função somar
double multiplicacao(double a, double b)
{
  return a * b;
}
