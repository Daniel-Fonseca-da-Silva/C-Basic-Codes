#include <iostream>
#include <fstream>

using namespace std;

int main()
{


  //Cria um arquivo no local com o texto Este e o poder da computacao C++
  ofstream output("saida.txt");

  output << "Este e o poder da computacao C++\n";


  ifstream in("saida.txt"); // arquivo de leitura
  char c = in.get(); // pega primeira caracter
  string texto;

  texto.push_back(c);

  while(in.good())
  {
    c = in.get();
    texto.push_back(c);
  }
  cout << texto << endl;

  return 0; // returno
}
