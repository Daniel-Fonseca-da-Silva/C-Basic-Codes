#include <iostream>

using namespace std;

void fun()
{
  cout << "Primeira função" << endl;
}

int fun(int num)
{
  cout << "Segunda função" << endl;
  return (num + 10);
}

int main()
{

  fun();
  fun(10);

  return 0;
}
