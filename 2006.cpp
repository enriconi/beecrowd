#include <iostream>
using namespace std;

int main()
{
  int i, aux = 0;
  int a, b, c, d, e;

  cin >> i;
  cin >> a >> b >> c >> d >> e;

  if (a == i) aux += 1;
  if (b == i) aux += 1;
  if (c == i) aux += 1;
  if (d == i) aux += 1;
  if (e == i) aux += 1;

  cout << aux << endl;
  
  return 0;
}