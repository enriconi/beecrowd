#include <iostream>

using namespace std;

int main()
{
  int a, b, c, aux = 0;

  cin >> a >> b >> c;

  aux = b;

  while ((aux * 1000) < (a * c)) aux += b;

  cout << aux << endl;
  
  return 0;
}