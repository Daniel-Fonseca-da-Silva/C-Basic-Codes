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

  fusca.show();
  fusca.show(1970);

  return 0;
}
