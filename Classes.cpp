#include <iostream>

using namespace std;

class Pessoa
{
private: // Metódo de acesso privado
  // Atributos privados
  int idade;
  float peso;

  // Metódos
public:
  void setIdade(int idade)
  {
    this->idade = idade;
  }
  int getIdade()
  {
    return idade;
  }
  void setPeso(float peso)
  {
    this->peso = peso;
  }
  float getPeso()
  {
    return peso;
  }
};

int main()
{
  Pessoa pessoa; // Instancia
  Pessoa* aluno;// Ponteiro

  aluno = &pessoa;

  aluno->setIdade(26);
  aluno->setPeso(83.5);

  cout << "Idade: " << aluno->getIdade() << '\n' << "Peso: " << aluno->getPeso() << endl;


  return 0;
}
