#include <iostream>

using namespace std;

// Função somar

int somar(int num1, int num2)
{
  int soma;

  soma =  num1 + num2;

  return soma;
}

void msg()
{
  cout << "O valor calculado foi" << endl;
}

int main()
{
  msg(); // invocação da funcao sem retorno msg
  cout << somar(25, 35) << endl;// invocação da função somar

  return 0;
}
