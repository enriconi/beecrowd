#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int l, a, p, r;
  double d;

  cin >> l >> a >> p >> r;

  r += r;
  d = sqrt((l * l) + (a * a) + (p * p));

  if (d <= r) cout << "S" << endl;
  else cout << "N" << endl;
  
  return 0;
}