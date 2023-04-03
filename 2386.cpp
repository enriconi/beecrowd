#include <iostream>

using namespace std;

int main()
{
  int tAA, n, s, aux = 0;

  cin >> tAA;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    if ((tAA * s) >= 40000000) aux++;
  }

  cout << aux << endl;
  
  return 0;
}