#include <iostream>

using namespace std;

int main()
{
  double n;
  int aux = 0;

  for (int i = 0; i < 6; i++) {
    cin >> n;
    if (n > 0) aux++;
  }

  cout << aux << " valores positivos" << endl;
  
  return 0;
}