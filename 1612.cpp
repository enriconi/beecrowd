#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int n;
  double a;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    cout << fixed << setprecision(0);
    cout << ceil(a / 2.0) << endl;
  }

  return 0;
}