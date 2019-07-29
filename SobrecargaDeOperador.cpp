#include <iostream>
#include <string.h>

using namespace std;

class Estudante
{
protected:

  // Atributos
  char * nome;
  int id;

protected:

  void init(const char * novoNome, int novoId)
  {

    int tam = strlen(novoNome) +1;

    nome = new char[tam];

    strcpy(nome, novoNome);
    id = novoId;
  }

  void destruidor()
  {
    delete[] nome;
    nome = 0;
  }

public:

  // Construtor
  Estudante(const char * novoNome, int novoId)
  {
    cout << "Construindo " << novoNome << endl;

    init(novoNome, novoId);

  }

  Estudante(Estudante &e)
  {
    cout << "Construindo copia de " << e.nome << endl;
    init(e.nome, e.id);
  }

  // Desconstrutor
  virtual ~Estudante()
  {
    cout << "Destruindo " << nome << endl;
    destruidor();
  }

  // Sobrecarrega o operador de designaçao
  Estudante& operator=(Estudante& origem)
  {
    if(this != &origem)
    {
      cout << "Atribuindo " << origem.nome << " para " << nome << endl;

      // Primeiro destrói o objeto existente
      destruidor();

      // copia o objeto origem
      init(origem.nome, origem.id);
    }
    return *this;
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

// Funcao
void funcao()
{
  Estudante e1("Daniel", 1993);
  Estudante e2("Nikolai", 1990);

  e2 = e1; // e2.operator=(e1);
}

int main()
{

  funcao();

  return 0; // returno
}
