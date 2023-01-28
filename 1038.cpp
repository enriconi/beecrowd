#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int a;
  double b;

  cin >> a >> b;

  cout << fixed << setprecision(2);
  cout << "Total: R$ ";
  if (a == 1) cout << (b * 4) << endl;
  else if (a == 2) cout << (b * 4.50) << endl;
  else if (a == 3) cout << (b * 5) << endl;
  else if (a == 4) cout << (b * 2) << endl;
  else cout << (b * 1.50) << endl;
  
  return 0;
}