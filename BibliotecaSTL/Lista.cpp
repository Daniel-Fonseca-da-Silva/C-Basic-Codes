#include <iostream>
#include <list>
#include <string.h>

using namespace std;

class Pessoa
{
public:
  char * nome;

  Pessoa(const char * novoNome)
  {
    int tam = strlen(novoNome);
    nome = new char[tam + 1];
    strcpy(nome, novoNome);
  }

};

int main(int argc, char const *argv[])
{

  Pessoa p1("Daniel"),
  p2("Nikolai"),
  p3("Alisa");

  list<Pessoa> lista;

  lista.push_back(p1);
  lista.push_back(p2);
  lista.push_back(p3);

  //lista.pop_front(); // Deleta o primeiro elemento
  //lista.pop_back(); // Deleta ultimo elemento

  list<Pessoa>::iterator it;

  for(it = lista.begin(); it != lista.end(); it++)
  {
    std::cout << it->nome << '\n';
  }

  std::cout << "Primeiro elemento: " << lista.front().nome << '\n';
  std::cout << "Ultimo elemento: " << lista.back().nome << '\n';
  cout << "Tamanho da lista " << lista.size() << '\n';

  return 0;
}
