#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double aux = 1, j = 3, k = 2;

  for (int i = 2; i <= 100; i++) {
    aux += (j / (double) k);
    j += 2;
    k *= 2;
  }
  
  cout << fixed << setprecision(2);
  cout << aux << endl;

  return 0;
}