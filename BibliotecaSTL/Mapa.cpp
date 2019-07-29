#include <iostream>
#include <map>

// Map associação chave e valor hash
// Mapeia valor atraves da chave

using namespace std;

int main(int argc, char const *argv[])
{

  // Primeiro é a chave, segundo o valor
  map<string, int> mapa;

  mapa["Daniel"] = 26;
  mapa["Alisa"] = 22;
  mapa["Dimitri"] = 30;

  //std::cout << mapa["Daniel"] << '\n';
  map<string, int> :: iterator it;

  for (it  = mapa.begin(); it != mapa.end(); it++)
  {
    std::cout << "Idade de " << it->first << " : " << it->second << '\n';
  }

  // Mapa não garante a ordem!

  return 0;
}
