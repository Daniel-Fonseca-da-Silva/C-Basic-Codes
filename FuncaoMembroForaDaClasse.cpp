#include <iostream>

using namespace std;

class Pessoa
{
public:
  int idade;

  void setIdade(int idade);// Declaração de funcao dentro da funcao

};

void Pessoa::setIdade(int idade)// Implementacao da funcao
{
  this->idade = idade;
}

int main()
{

  Pessoa p; // Cria p do tipo pessoa

  p.setIdade(26); // Seta um valor para o objeto criado

  cout << p.idade << endl; // Exibe o valor amarzenado no objeto p

  return 0;
}
