#include <iostream>
#include <string.h>

using namespace std;

class Estudante
{
protected:
  char * nome;
  int id;
public:
  Estudante(const char * novoNome, int novoId)
  {
      cout << "Construindo " << novoNome << endl;

      int tam = strlen(novoNome) + 1;

      nome = new char[tam];
      strcpy(nome, novoNome);
      id = novoId;
  }

  // Construtor de copias
  Estudante(const Estudante & e)
  {
    cout << "Construindo a copia de " << e.nome << endl;

    int tam = strlen(e.nome) + 30;

    this->nome = new char[tam];
    strcpy(this->nome, "Copia de ");
    strcat(this->nome, e.nome);
    this->id = e.id;
  }

  ~Estudante()
  {
    cout << "Destruindo " << nome << endl;
    delete[] nome;
    nome = 0;
  }

  const char* getNome()
  {
    return nome;
  }
  int getId()
  {
    return id;
  }

};

void outraFuncao(Estudante e)
{

}

void funcao()
{
  Estudante e("Daniel", 1111);

  outraFuncao(e);
  cout << "O nome do estudante e " << e.getNome() << endl;
}

int main()
{

  funcao();

  return 0; // returno
}
