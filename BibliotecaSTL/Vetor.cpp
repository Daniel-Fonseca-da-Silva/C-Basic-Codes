#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v;

  v.push_back(10); // Adiciona 10 ao v
  v.push_back(12);
  v.push_back(20);
  v.push_back(30);

  vector<int>::iterator it;

  it = v.begin() + 1;

  v.insert(it, 11);



  //v.erase(v.begin() + 2); // Apaga o terceiro elemento
  //v.pop_back(); // Remove o ùltimo elemento

  // Varedura do vetor
  for (unsigned int i = 0; i < v.size(); i++)
  {
    std::cout << v[i] << endl;
  }

  //v.clear(); // Apaga todos elementos

  if(v.empty()) // Se v estiver vazio
  {
    std::cout << "vetor vazio" << '\n';
  }
  else
  std::cout << "vetor NÃO VAZIO" << '\n';

  std::cout << "Elemento da segunda posição: " << v.at(1) << '\n';
  std::cout << "Primeiro elemento: " << v.front() << '\n';
  std::cout << "Ultimo elemento do vetor: " << v.back() << '\n';
  return 0;
}
