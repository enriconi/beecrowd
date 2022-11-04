#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << fixed << setprecision(1);
  float a, b, c;

  cin >> a >> b >> c;

  if (a < (b + c) && b < (a + c) && c < (a + b)) cout << "Perimetro = " <<  (a + b + c) << endl;
  else cout << "Area = " << ((a + b) * c) / 2 << endl;

  return 0;
}