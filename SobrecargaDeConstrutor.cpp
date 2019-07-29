#include <iostream>
#include <string.h>

using namespace std;

class Estudante
{
private:

  // Atributos privados
  char nome[100];
  int idade;
public:

  // Construtor
  Estudante(const char* nome)
  {
    strcpy(this->nome, nome);
    idade = -1;
  }

  // Construtor
  Estudante(int idade)
  {
    this->idade = idade;
    strcpy(this->nome, "Desconhecido");
  }

  // método
  int getIdade()
  {
    return idade;
  }

  // Funcao
  char showPessoa()
  {
    cout << "Nome: " << nome << endl;

    if(idade != -1)
    {
      cout << "Idade: " << idade << endl;
    }
    else
    {
      cout << "Idade desconhecida" << endl;
    }
  }
  
};

int main()
{

  Estudante e("Daniel"), e2(26);

  e.showPessoa();
  e2.showPessoa();

  return 0;
}
