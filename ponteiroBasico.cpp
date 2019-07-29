#include <iostream>

using namespace std;

// * operador de indireção ou operador de desreferência

int main()
{

  int y = 5;

  int *xPtr;

  xPtr = &y; // xPtr aponta para o endereco de memoria de y

  cout << xPtr << endl;

  cout << *xPtr << endl; // desreferência o ponteiro mostrando o valor de y

  cout << "Entre com um dado no ponteiro" << endl;
  cin >> *xPtr; // aponta para xPtr que aponta para variável y
  cout << "Valor no ponteiro " << *xPtr << endl;
  cout << "Valor na variável y apontada " << y << endl;

  return 0;
}
