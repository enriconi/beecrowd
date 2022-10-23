#include <iostream>

using namespace std;

int main()
{
  int i;
  int a, m, d;

  cin >> i;

  a = i / 365;
  m = (i % 365) / 30;
  d = (i % 365 % 30);

  cout << a << " ano(s)" << endl;
  cout << m << " mes(es)" << endl;
  cout << d << " dia(s)" << endl;

  return 0;
}