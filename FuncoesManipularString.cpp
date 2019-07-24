#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{

  char c = 'A';

  if(isalpha(c)) // isalpha se é ou não alfabetico
  cout << "Alfabetico" << endl;
  else
  cout << "Nao alfabetico" << endl;

  if(isdigit(c)) // isdigit se é ou não um digito
  cout << "Digito" << endl;
  else
  cout << "Nao digito" << endl;

  if(isupper(c)) // isUpper se está ou não Maiusculo
  cout << "Maiusculo" << endl;
  else
  cout << "Nao maiusculo" << endl;

  if(islower(c)) // islower se está ou não minusculo
  cout << "Minusculo" << endl;
  else
  cout << "Nao minusculo" << endl;

  char nome[] = "daniel";
  char nomeA[] = "Daniel";
  char sobrenome[] = " Fonseca";
  char nomeCompleto[50];

  cout << "Tamanho: " << strlen(nome) << endl;

  // strcmp retorna 0 se igual e 1 se não
  if(strcmp(nome, nomeA) == 0)
    cout << "Strings iguais" << endl;
  else // Retorna 1
    cout << "Strings não iguais" << endl;

  // strcpy copia uma string para outra
  // strcpy(destino, origem);
  strcpy(nomeCompleto, nomeA);
  cout << nomeCompleto << endl;

  // strcat(destino, origem) concatena strings "junta"
  strcat(nomeCompleto, sobrenome);
  cout << nomeCompleto << endl;

  // converte para Maiusculo
  char CharQualquer  = 'a';
  char CharMod = toupper(CharQualquer);

  cout << CharMod << endl;

  // converte para maiusculo

  // converte para minusculo
  CharQualquer = tolower(CharMod);

  cout << CharQualquer << endl;

  return 0;
}
