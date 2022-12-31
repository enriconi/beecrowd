#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n[5], auxC[5], auxD[5];

  for (int i = 0; i < 5; i++) cin >> n[i];

  copy(n, n + 5, auxC);
  copy(n, n + 5, auxD);
  
  sort(auxC, auxC + 5);
  sort(auxD, auxD + 5, greater<int>());

  if (equal(n, n + 5, auxC)) cout << 'C' << endl;
  else if (equal(n, n + 5, auxD)) cout << 'D' << endl;
  else cout << 'N' << endl;

  return 0;
}