#include <iostream>

using namespace std;

class Estudante
{
  friend void setIdade(Estudante * e, int idade); // Função amiga

protected:
  int idade;

};

void setIdade(Estudante * e, int idade)
{
  e->idade = idade;
  cout << "Idade: " << idade;
}

int main()
{

  Estudante * e;

  e = new Estudante;

  setIdade(e, 26);

  return 0;
}
