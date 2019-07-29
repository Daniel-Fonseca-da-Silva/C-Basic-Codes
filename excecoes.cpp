#include <iostream>

using namespace std;

int fat(int n)
{
  if(n < 0)
  {
    throw "Numero negativo";
  }
  if(n == 0 || n ==1)
  {
    return 1;
  }
  return n * fat(n - 1);
}

int main()
{

  try // Tente
  {
    cout << "Fatorial " << fat(-1) << endl;
  }
  catch(const char * e) // Pegue a exceção
  {
    cerr << "Erro detectado: " << e << endl;
  }
  catch(...) // Pegue a exceção
  {
    cerr << "Erro inesperado\n";
  }

  return 0; // Retorno
}
