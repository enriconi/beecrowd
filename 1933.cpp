#include <iostream>

using namespace std;

int main()
{
  int a, b, aux = 0;

  cin >> a >> b;

  if (a > b) aux = a;
  if (b > a || b == a) aux = b;

  cout << aux << endl;
  
  return 0;
}