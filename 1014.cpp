#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a;
  double b;

  cin >> a;
  cin >> b;
  
  cout << fixed << setprecision(3);
  cout << a / b << " km/l" << endl;

  return 0;
}