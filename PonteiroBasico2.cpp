#include <iostream>

using namespace std;

// & operador de endereço
// * operador de desreferência

int main()
{

  int a; // a é um inteiro
  char letra; //  letra é um caracter

  char *letraPtr; // letraPtr é um ponteiro char para um char
  int *aPtr; // aPtr é um ponteiro int para um inteiro

  letra = 'D';
  a = 7; // a recebe 7

  aPtr = &a; // Atribui o endereço de a ao aPtr
  letraPtr = &letra; // Atribui o endreco de letra ao letraPtr

  cout << "O endereco de a é " << &a << " o valor de aPtr é " << aPtr << endl;
  cout << "\nO valor de a é " << a << " o valor de *aPtr é " << *aPtr << endl;
  cout << "\nMostrando que * e & são inversos do outro " << &*aPtr << "\n&*aPtr = " << *&aPtr << endl;

  cout << "\n\nO endereco de letra é " << &letraPtr << " e o valor é " << *letraPtr << endl;

  return 0;
}
