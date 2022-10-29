#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c, delta, r1, r2;

  cin >> a >> b >> c;

  delta = pow(b, 2) - (4 * a * c);
  r1 = (-b + sqrt(delta)) / (2 * a);
  r2 = (-b - sqrt(delta)) / (2 * a);

  if (delta <= 0 || a <= 0) {
    cout << "Impossivel calcular" << endl;
  } else {
    cout << fixed << setprecision(5);
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl; 
  }

  return 0;
}