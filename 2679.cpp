#include <iostream>

using namespace std;

int main()
{
  int a, aux;

  cin >> a;

  aux = a + 1;

  while (aux % 2 != 0) aux++;  
  
  cout << aux << endl;

  return 0;
}