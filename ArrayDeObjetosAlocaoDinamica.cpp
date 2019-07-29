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
  Carro* carros;
  carros = new Carro[3]; // Cria 3 carros

  carros[0].ano = 2015;
  carros[0].peso = 700.65;
  carros[1].ano = 2019;
  carros[1].peso = 1030.91;
  carros[2].ano = 2018;
  carros[2].peso = 1530.75;

  cout << "Exibindo todos os veiculos da loja...\n" << endl;

  for(int i = 0; i < 3; i++)
  {
    cout << "Ano: " << carros[i].ano << endl;
    cout << "Peso: " << carros[i].peso << endl;
    take += i;
  }

  cout << "\nForam exibitos um total de " << take << " veiculos" << endl;

  delete[] carros;

  return 0;
}
