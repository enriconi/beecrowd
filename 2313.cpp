#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
    cout << "Invalido" << endl;
    return 0;
  }

  if (a == b && b == c) cout << "Valido-Equilatero" << endl;
  else if (a != b && b != c && a != c) cout << "Valido-Escaleno" << endl;
  else cout << "Valido-Isoceles" << endl;

  if (pow(a, 2) + pow(b, 2) == pow(c, 2) 
    || pow(a, 2) + pow(c, 2) == pow(b, 2)
    || pow(b, 2) + pow(c, 2) == pow(a, 2)) cout << "Retangulo: S" << endl;
  else cout << "Retangulo: N" << endl;
  
  return 0;
}