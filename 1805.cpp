#include <iostream>

using namespace std;

int main()
{
  unsigned int a, b;
  unsigned long long aux;

  cin >> a >> b;

  for (int i = b; i >= a; i--) aux += i;

  // Existe a fórmula para somar todos os números naturais também: b * (b + 1) / 2 - a * (a - 1) / 2, seria mais performático

  cout << aux << endl;

  return 0;
}