#include <iostream>

using namespace std;

int main()
{
  int a, b;
  double m, n;

  cin >> a >> b;

  if (a >= 0 && b <= 2) cout << "nova" << endl;
  else if (b >= a && b <= 96) cout << "crescente" << endl;
  else if (a >= b && b <= 96) cout << "minguante" << endl;
  else cout << "cheia" << endl;

  return 0;
}