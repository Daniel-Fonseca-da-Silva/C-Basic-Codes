#include <iostream>

using namespace std;

class Estudante
{
public:

  void setIdade(int idade)
  {
    this->idade = idade;
    cout << "Idade: " << idade;
  }

protected:
  int idade;

};

int main()
{

  Estudante aluno;

  aluno.setIdade(26);

  return 0;
}
