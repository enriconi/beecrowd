#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a;
  double n = 3.14159;

  cin >> a;
  
  double calculo = n * a * a;

  cout << fixed << setprecision(4);
  cout << "A=" << calculo << endl;

  return 0;
}