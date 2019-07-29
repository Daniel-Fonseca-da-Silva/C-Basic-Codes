#include <iostream>
#include <string>

using namespace std;

int main()
{

  string nome = ("Daniel");

  cout << nome << endl;

  cout << "Tamanho da string: " << nome.size() << endl; // Mostra o tamanho da String
  cout << "Primeiro caracter: " << nome[0] << endl;
  cout << "Segundo caracter: " << nome.at(1) << endl; // Pega o valor da string pela posição

  //nome.push_back('F'); // Adiciona 1 caracter
  nome.append(" Fonseca"); // Adiciona caracteres
  cout << "Nome Completo: " << nome << endl;

  nome.insert(nome.size(), "Fonseca"); // Insere Strings

  nome.clear(); // Limpa String

  cout << "Tamanho da string: " << nome.size() << endl;

  if (nome.empty())// Se a String é vazia ou não
  {
    cout << "String vazia\n";
  }else
  {
    cout << "String não vazia\n";
  }




  return 0; // returno
}
