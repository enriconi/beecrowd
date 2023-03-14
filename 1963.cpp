#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double o, n;

  cin >> o >> n;

  n -= o;
  o = (n * 100) / o;
  
  cout << fixed << setprecision(2);
  cout << o << '%' << endl;

  return 0;
}