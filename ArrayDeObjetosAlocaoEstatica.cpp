#include <iostream>

using namespace std;

class Carro
{
public:
  int ano;
  float peso;
};

int main()
{
  int take = 0;
  Carro carros[3];

  carros[0].ano = 2015;
  carros[0].peso = 700.65;
  carros[1].ano = 2019;
  carros[1].peso = 1030.91;
  carros[2].ano = 2018;
  carros[2].peso = 1530.75;

  cout << "Exibindo todos os veiculos da loja..\n" << endl;

  for(int i = 0; i < 3; i++)
  {
    cout << "\nAno: " << carros[i].ano;
    cout << "\nPeso: " << carros[i].peso;
    take += i;
  }

  cout << "\nForam exibitos um total de " << take << " veiculos" << endl;

  return 0;
}
