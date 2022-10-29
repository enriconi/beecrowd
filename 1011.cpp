#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double r;
  double pi = 3.14159;

  cin >> r;

  double calculo = (4 / 3.0) * pi * r * r * r;
  
  cout << fixed << setprecision(3);
  cout << "VOLUME = " << calculo << endl;

  return 0;
}