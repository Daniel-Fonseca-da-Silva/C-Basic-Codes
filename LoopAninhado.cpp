#include <iostream>

using namespace std;

int main()
{

  int n = 1;

  while(n <= 10)
  {
    int i = 1;

    cout << "N: " << n << endl;

    while(i <= 10)
    {
      cout << "i: " << n << endl;
      i++;
    }

    cout << endl;
    n++;

  }

  return 0;
}
