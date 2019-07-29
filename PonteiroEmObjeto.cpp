#include <iostream>

using namespace std;

class Carro
{
public:

  void show()
  {
    cout << "Função a" << endl;
  }
  void show(int ano)
  {
    cout << "Ano: " << ano << endl;
  }
};

int main()
{

  Carro fusca;
  Carro* fuscaPtr;

  fuscaPtr = &fusca;

  fuscaPtr->show(1976);

  return 0;
}
