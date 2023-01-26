#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double n;

  cin >> n;

  cout << fixed << setprecision(2);
  if (n <= 2000) cout << "Isento" << endl;
  else if (n > 2000 && n <= 3000) cout << "R$ " << ((n - 2000) * 0.08) << endl;
  else if (n > 3000 && n <= 4500) cout << "R$ " << (((n - 3000) * 0.18) + (1000 * 0.08)) << endl;
  else cout << "R$ " << (((n - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08)) << endl;
  
  return 0;
}