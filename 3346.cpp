#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a, b;

  cin >> a >> b;

  cout << fixed << setprecision(6);
  cout << ((((1.0 + a / 100.00) * (1.0 + b / 100.00)) - 1.0) * 100.0) << endl;
  
  return 0;
}