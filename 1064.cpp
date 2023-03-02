#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double n, avg = 0;
  int aux = 0;
  
  for (int i = 0; i < 6; i++) {
    cin >> n;
    
    if (n >= 0) {
      aux++;
      avg += n;
    }
  }

  cout << fixed << setprecision(1);
  cout << aux << " valores positivos" << endl;
  cout << (avg / aux) << endl;
  
  return 0;
}