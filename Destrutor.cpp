#include <iostream>

using namespace std;

class Aluno
{

// Atributos privados
private:
  int idade;
  int * notas;

public:

  // Construtor
  Aluno(int idade)
  {
    this->idade = idade;
    notas = new int[10];
  }

  // Destrutor
  ~Aluno()
  {
    delete[] notas;
    notas = 0;
  }

  // Funcao mostra idade
  void mostrarIdade()
  {
    cout << "Idade: " << idade << endl;
  }

};

int main()
{

  Aluno aluno(26);

  aluno.mostrarIdade();


  return 0;
}
