#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int id, n;
  double v;
  double total = 0;

  for (int i = 0; i < 2; i++) {
    cin >> id >> n >> v;
    total += n * v;
  }

  cout << fixed << setprecision(2);
  cout << "VALOR A PAGAR: R$ " << total << endl;

  return 0;
}