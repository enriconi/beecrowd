#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double aux = 1;

  for (int i = 2; i <= 100; i++) aux += (1 / (double) i);
  
  cout << fixed << setprecision(2);
  cout << aux << endl;

  return 0;
}