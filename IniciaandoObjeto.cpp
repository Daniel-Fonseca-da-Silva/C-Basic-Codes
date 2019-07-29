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

  // Construtor
  Pessoa(int idade, float peso)
  {
    this->idade = idade;
    this->peso = peso;
  }

  // Metódos Acessadores e modificadores

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

  Pessoa pessoa(26, 73.52);
  Pessoa* aluno;// Ponteiro

  aluno = &pessoa;

  //aluno->setIdade(26);
  //aluno->setPeso(83.5);

  cout << "Idade: " << aluno->getIdade() << '\n' << "Peso: " << aluno->getPeso() << endl;


  return 0;
}
