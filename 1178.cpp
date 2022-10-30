#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << fixed << setprecision(4);
  
  double n;

  cin >> n;
  
  for (int i = 0; i < 100; i++) {
    if (n > 0) cout << "N[" << i << "] = " << n << endl;
    else cout << "N[" << i << "] = " << "0.0000" << endl;

    n /= 2;
  }
  
  return 0;
}