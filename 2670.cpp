#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a, b, c;
  int tA, tB, tC;
  int menor = 9999;

  cin >> a;
  cin >> b;
  cin >> c;

  tA = (a * 0) + (b * 2) + (c * 4);
  tB = (a * 2) + (b * 0) + (c * 2);
  tC = (a * 4) + (b * 2) + (c * 0);
  
  if (tA > tB) swap(tB, tA);
  if (tA > tC) swap(tC, tA);

  cout << tA << endl;
  
  return 0;
}